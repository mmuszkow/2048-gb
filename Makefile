BIN=../gbdk-n/bin
OBJ=./obj

build:
	mkdir -p $(OBJ)
	$(BIN)/gbdk-n-compile.sh 2048.c -o $(OBJ)/2048.rel
	$(BIN)/gbdk-n-link.sh $(OBJ)/2048.rel -o $(OBJ)/2048.ihx
	$(BIN)/gbdk-n-make-rom.sh $(OBJ)/2048.ihx 2048.gb
#	../rgbasm/rgbfix -p 0xff -C -jv -i 2048 -k PL -l 0 -m 0 -p 0 -r 0 -t "2048           " 2048.gb

clean:
	rm -rf $(OBJ)
	rm -f 2048.gb
