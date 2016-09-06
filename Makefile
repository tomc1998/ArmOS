VPATH = obj:src
OBJ_PATH=obj
BIN_PATH=bin
CC=arm-linux-gnueabi-gcc
CFLAGS=-ansi -pedantic -Wall -Wextra -march=armv6 -msoft-float -fPIC -mapcs-frame -fno-stack-protector 
LD=arm-linux-gnueabi-ld
LDFLAGS=-N -Ttext=0x10000 -L/usr/lib/gcc-cross/arm-linux-gnueabi/4.7
LD_LINK_LIBS = -lgcc -lm

.SUFFIXES: .o .elf
.o.elf:
	$(LD) $(LDFLAGS) -o $(BIN_PATH)/$@ $^ $(LD_LINK_LIBS)

all: $(BIN_PATH)/kernel.elf

$(BIN_PATH)/kernel.elf: $(OBJ_PATH)/bootstrap.o $(OBJ_PATH)/kernel.o $(OBJ_PATH)/raise.o $(OBJ_PATH)/log.o $(OBJ_PATH)/num_to_ascii.o $(OBJ_PATH)/bare_math.o
	$(LD) $(LDFLAGS) -o $@ $^ $(LD_LINK_LIBS)


$(OBJ_PATH)/kernel.o: $(OBJ_PATH)/raise.o $(OBJ_PATH)/log.o

$(OBJ_PATH)/raise.o: $(OBJ_PATH)/log.o

$(OBJ_PATH)/%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(OBJ_PATH)/%.o: %.s
	$(CC) $(CFLAGS) -o $@ -c $^
