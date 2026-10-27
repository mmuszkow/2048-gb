#!/usr/bin/env python3

import struct
from pathlib import Path
from PIL import Image, ImageDraw
import subprocess
import os
import re

WIDTH = 256
HEIGHT = 224
TILE_SIZE = 8

# Palette entry 0 is transparent. Entries 1-15 are opaque colours.
# Keep this ordering: it also makes the blue, red, and yellow ramps easy to edit.
PALETTE = [
    (0, 0, 0),          # 0: transparent (RGB value is ignored)
    (15, 25, 45),       # 1: very dark navy / border and outlines
    (255, 248, 225),    # 2: warm white
    (128, 128, 128),    # 3: gray
    (20, 33, 61),       # 4: navy blue
    (36, 85, 164),      # 5: deep blue
    (67, 143, 224),     # 6: bright blue
    (168, 216, 255),    # 7: ice blue
    (59, 16, 24),       # 8: dark red
    (140, 38, 53),      # 9: crimson
    (217, 74, 80),      # 10: bright red
    (255, 176, 160),    # 11: salmon
    (112, 66, 20),      # 12: ochre
    (184, 134, 11),     # 13: gold
    (245, 197, 66),     # 14: yellow
    (255, 241, 168),    # 15: pale yellow
]

# Compact 3x5 bitmap font for tile values.
FONT_3X5 = {
    "0": ("111", "101", "101", "101", "111"),
    "1": ("010", "110", "010", "010", "111"),
    "2": ("111", "001", "111", "100", "111"),
    "3": ("111", "001", "111", "001", "111"),
    "4": ("101", "101", "111", "001", "001"),
    "5": ("111", "100", "111", "001", "111"),
    "6": ("111", "100", "111", "101", "111"),
    "7": ("111", "001", "010", "010", "010"),
    "8": ("111", "101", "111", "101", "111"),
    "9": ("111", "101", "111", "001", "111"),
}

# Larger 5x7 bitmap font for the top title.
FONT_5X7 = {
    "0": ("01110", "10001", "10011", "10101", "11001", "10001", "01110"),
    "1": ("00100", "01100", "00100", "00100", "00100", "00100", "01110"),
    "2": ("01110", "10001", "00001", "00010", "00100", "01000", "11111"),
    "3": ("11110", "00001", "00001", "01110", "00001", "00001", "11110"),
    "4": ("00010", "00110", "01010", "10010", "11111", "00010", "00010"),
    "5": ("11111", "10000", "10000", "11110", "00001", "00001", "11110"),
    "6": ("01110", "10000", "10000", "11110", "10001", "10001", "01110"),
    "7": ("11111", "00001", "00010", "00100", "01000", "01000", "01000"),
    "8": ("01110", "10001", "10001", "01110", "10001", "10001", "01110"),
    "9": ("01110", "10001", "10001", "01111", "00001", "00001", "01110"),
}

# For each shade, select a neighbouring shade for the tiny top highlight.
TILE_HIGHLIGHT = {
    4: 5, 5: 6, 6: 7, 7: 6,
    8: 9, 9: 10, 10: 11, 11: 10,
    12: 13, 13: 14, 14: 15, 15: 14,
}

# Label, base colour, text colour. Values proceed clockwise around the frame:
# 1..32 down the left side, then 64..2048 up the right side.
TILE_LABELS = [
    ("1", 4, 2),
    ("2", 5, 2),
    ("4", 6, 1),
    ("8", 7, 1),
    ("16", 8, 2),
    ("32", 9, 2),
    ("64", 10, 1),
    ("128", 11, 1),
    ("256", 12, 2),
    ("512", 13, 1),
    ("1024", 14, 1),
    ("2048", 15, 1),
]


def draw_scaled_glyph(
    draw: ImageDraw.ImageDraw,
    glyph: tuple[str, ...],
    x: int,
    y: int,
    scale: int,
    colour: int,
) -> None:
    """Draw a bitmap glyph with integer scale and no anti-aliasing."""
    for row, bits in enumerate(glyph):
        for col, bit in enumerate(bits):
            if bit == "1":
                left = x + col * scale
                top = y + row * scale
                draw.rectangle(
                    (left, top, left + scale - 1, top + scale - 1),
                    fill=colour,
                )


def draw_bitmap_text(
    draw: ImageDraw.ImageDraw,
    text: str,
    x: int,
    y: int,
    scale: int,
    colour: int,
    font: dict[str, tuple[str, ...]],
    spacing: int,
) -> None:
    glyph_width = len(font[text[0]][0])
    advance = (glyph_width + spacing) * scale
    for char_index, char in enumerate(text):
        draw_scaled_glyph(
            draw,
            font[char],
            x + char_index * advance,
            y,
            scale,
            colour,
        )


def text_width(text: str, font: dict[str, tuple[str, ...]], scale: int, spacing: int) -> int:
    glyph_width = len(font[text[0]][0])
    return (len(text) * glyph_width + (len(text) - 1) * spacing) * scale


def draw_tile(
    draw: ImageDraw.ImageDraw,
    label: str,
    x: int,
    y: int,
    base_colour: int,
    text_colour: int,
) -> None:
    """Draw a 32x24 tile aligned to the 8x8 grid.

    A tile uses only outline, base shade, highlight shade, and text colour.
    Its dimensions are multiples of eight so no 8x8 cell is partly transparent
    inside a tile.
    """
    width, height = 32, 24
    outline = 1
    highlight = TILE_HIGHLIGHT[base_colour]

    draw.rectangle((x, y, x + width - 1, y + height - 1), fill=outline)
    draw.rectangle((x + 1, y + 1, x + width - 2, y + height - 2), fill=base_colour)
    # One-pixel gloss plus a short vertical glint, using the same accent shade.
    draw.line((x + 3, y + 2, x + width - 4, y + 2), fill=highlight)
    draw.line((x + 2, y + 3, x + 2, y + 5), fill=highlight)

    scale = 2
    spacing = 1
    label_width = text_width(label, FONT_3X5, scale, spacing)
    text_x = x + (width - label_width) // 2
    text_y = y + (height - 5 * scale) // 2
    draw_bitmap_text(draw, label, text_x, text_y, scale, text_colour, FONT_3X5, spacing)


def draw_title(draw: ImageDraw.ImageDraw) -> None:
    title = "2048"
    scale = 4
    spacing = 1
    title_width = text_width(title, FONT_5X7, scale, spacing)
    x = (WIDTH - title_width) // 2
    y = 6

    # Offset dark shadow, then yellow face and pale-yellow top-row glints.
    draw_bitmap_text(draw, title, x + 2, y + 2, scale, 1, FONT_5X7, spacing)
    advance = (5 + spacing) * scale
    for index, char in enumerate(title):
        glyph_x = x + index * advance
        draw_scaled_glyph(draw, FONT_5X7[char], glyph_x, y, scale, 14)
        first_row = FONT_5X7[char][0]
        for col, bit in enumerate(first_row):
            if bit == "1":
                left = glyph_x + col * scale
                draw.rectangle((left, y, left + scale - 1, y + scale - 1), fill=15)


def draw_top_accents(draw: ImageDraw.ImageDraw) -> None:
    # Pixel-speed stripes; each 8x8 grid cell sees at most two stripe colours.
    draw.rectangle((48, 8, 75, 9), fill=6)
    draw.rectangle((56, 13, 75, 14), fill=10)
    draw.rectangle((64, 18, 75, 19), fill=14)

    draw.rectangle((180, 8, 207, 9), fill=14)
    draw.rectangle((180, 13, 199, 14), fill=10)
    draw.rectangle((180, 18, 191, 19), fill=6)

def draw_bottom_accents(draw: ImageDraw.ImageDraw) -> None:
    draw.rectangle((56, 194, 199, 195), fill=6)
    draw.rectangle((60, 202, 195, 203), fill=10)
    draw.rectangle((64, 210, 191, 211), fill=14)

def make_image() -> Image.Image:
    image = Image.new("P", (WIDTH, HEIGHT), color=3)
    image.putpalette([channel for rgb in PALETTE for channel in rgb])
    draw = ImageDraw.Draw(image)
    draw.rectangle((48, 40, 207, 183), fill=0)

    draw_top_accents(draw)
    draw_title(draw)

    # The full 160x144 opening is left transparent. Its boundary is one pixel
    # thick and sits immediately outside the opening: x=47/208, y=39/184.
    border = 1
    left, top = 48, 40
    right, bottom = left + 160 - 1, top + 144 - 1
    dark = 1
    draw.line((left - border, top - border, right + border, top - border), fill=dark)
    draw.line((left - border, bottom + border, right + border, bottom + border), fill=dark)
    draw.line((left - border, top - border, left - border, bottom + border), fill=dark)
    draw.line((right + border, top - border, right + border, bottom + border), fill=dark)

    # Tiles are 32x24, positioned on an 8px grid. Six descend on the left and
    # six ascend on the right, giving all powers of two from 1 through 2048.
    left_labels = TILE_LABELS[:6]
    right_labels = TILE_LABELS[6:]
    tile_y_positions = [40, 64, 88, 112, 136, 160]
    for (label, base, foreground), y in zip(left_labels, tile_y_positions):
        draw_tile(draw, label, 8, y, base, foreground)
    # Put the higher values at the top of the right column, so the sequence
    # continues clockwise from 32 at bottom-left to 64 at bottom-right.
    for (label, base, foreground), y in zip(reversed(right_labels), tile_y_positions):
        draw_tile(draw, label, 216, y, base, foreground)

    draw_bottom_accents(draw)
    image.info["transparency"] = 0
    return image


def png_palette_entry_count(path: Path) -> int:
    """Read the PNG PLTE chunk so we verify the stored palette, not just pixels."""
    data = path.read_bytes()
    if data[:8] != b"\x89PNG\r\n\x1a\n":
        raise AssertionError("Output is not a PNG file")
    offset = 8
    while offset + 12 <= len(data):
        chunk_length = struct.unpack(">I", data[offset:offset + 4])[0]
        chunk_type = data[offset + 4:offset + 8]
        chunk_data = data[offset + 8:offset + 8 + chunk_length]
        if chunk_type == b"PLTE":
            return len(chunk_data) // 3
        offset += 12 + chunk_length
    raise AssertionError("PNG is missing its PLTE palette chunk")


def validate(image: Image.Image, path: Path) -> None:
    if image.size != (256, 224):
        raise AssertionError(f"Wrong dimensions: {image.size}")
    if image.mode != "P":
        raise AssertionError(f"Expected indexed PNG, got mode {image.mode}")

    # Open the saved file again so all checks apply to the actual deliverable.
    with Image.open(path) as saved:
        saved.load()
        if saved.size != (256, 224) or saved.mode != "P":
            raise AssertionError("Saved PNG dimensions/mode are incorrect")
        if saved.info.get("transparency") != 0:
            raise AssertionError("Palette index 0 is not recorded as transparent")
        if png_palette_entry_count(path) != 16:
            raise AssertionError(f"PNG must store exactly 16 palette entries, got {png_palette_entry_count(path)}")
        pixels = saved.load()

        # Transparent gameplay opening: x=[48,208), y=[40,184).
        for y in range(40, 184):
            for x in range(48, 208):
                if pixels[x, y] != 0:
                    raise AssertionError(f"Gameplay opening is not transparent at ({x}, {y})")

        # Confirm one continuous, solid, one-pixel dark border outside the hole.
        for x in range(47, 209):
            if pixels[x, 39] != 1 or pixels[x, 184] != 1:
                raise AssertionError("Top/bottom viewport border is not continuous and one pixel thick")
        for y in range(39, 185):
            if pixels[47, y] != 1 or pixels[208, y] != 1:
                raise AssertionError("Left/right viewport border is not continuous and one pixel thick")

        # Strict aligned 8x8 colour limit; transparency counts as a colour.
        max_colours = 0
        for y in range(0, HEIGHT, TILE_SIZE):
            for x in range(0, WIDTH, TILE_SIZE):
                count = len({pixels[xx, yy] for yy in range(y, y + TILE_SIZE)
                             for xx in range(x, x + TILE_SIZE)})
                max_colours = max(max_colours, count)
                if count > 4:
                    raise AssertionError(
                        f"8x8 block at ({x}, {y}) uses {count} palette indices (maximum is 4)"
                    )
        if max_colours > 4:
            raise AssertionError("The 8x8 colour constraint was violated")

        used = set(saved.get_flattened_data())
        if used != set(range(16)):
            raise AssertionError(f"Expected all 16 palette indices to be used; used {sorted(used)}")

def reformat_c(fname):
    with open(fname) as f:
        text = f.read()
    
    text = re.sub(r'^\s*#include\b.*$', '', text, flags=re.MULTILINE)
    text = re.sub(r'^\s*BANKREF\b.*$', '', text, flags=re.MULTILINE)

    text = text.replace('uint8_t', 'UINT8')
    text = text.replace('unsigned char', 'UINT8')
    text = text.replace('sgb_border_palettes', 'SGB_PALETTES')
    text = text.replace('sgb_border_tiles', 'SGB_TILES')
    text = text.replace('sgb_border_map', 'SGB_MAP')
    with open(fname, 'w') as f:
        f.write(text)
    print('Reformatted', fname)

def main() -> None:
    output_path = Path('sgb_border.png')
    image = make_image()
    # Keep palette order and index 0 unchanged; no anti-aliasing or optimization.
    image.save(output_path, format="PNG", optimize=False, transparency=0)
    validate(image, output_path)
    print(f"Created and validated: {output_path}")
    print("Dimensions: 256x224; indexed palette: 16 entries; transparent opening: 160x144")
    print("Maximum colours in any aligned 8x8 block: 4")

    png2asset_cmd = f"../gbdk/bin/png2asset {output_path} -map -bpp 4 -max_palettes 4 -pack_mode sgb -use_map_attributes -c sgb_border.c"
    result = subprocess.run(png2asset_cmd, shell=True)
    if result.returncode != 0:
        raise RuntimeError("png2asset execution failed!")
    print("Executed: ", png2asset_cmd)

    os.unlink('sgb_border.h')
    reformat_c('sgb_border.c')

if __name__ == "__main__":
    main()
