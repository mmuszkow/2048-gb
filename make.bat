echo off
set BIN=..\gbdk-n\bin
set OBJ=obj

if exist %OBJ% rd /s/q %OBJ%
if exist 2048.gb del 2048.gb
if not exist %OBJ% mkdir %OBJ%

call %BIN%\gbdk-n-compile.bat 2048.c -o %OBJ%\2048.rel
call %BIN%\gbdk-n-link.bat %OBJ%\2048.rel -o %OBJ%\2048.ihx
call %BIN%\gbdk-n-make-rom.bat %OBJ%\2048.ihx 2048.gb
call ..\rgbasm\rgbfix -p 0xff -C -jv -i 2048 -k PL -l 0 -m 0 -p 0 -r 0 -t "2048           " 2048.gb
call ..\bgb\bgb 2048.gb

:end
