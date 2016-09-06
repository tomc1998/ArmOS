OBJ_PATH=obj
BIN_PATH=bin
PROGRAM_SRC_PATH=../src
VPATH = $(OBJ_PATH):src:$(PROGRAM_SRC_PATH)
CC=gcc
CFLAGS=-ansi -pedantic -Wall -Wextra -I$(PROGRAM_SRC_PATH) -Isrc
LD=ld
LDFLAGS=-L/usr/lib/gcc/x86_64-linux-gnu/4.8 -I$(PROGRAM_SRC_PATH) -Isrc
LDLIBS=-lm -lc -lgcc 

all: $(BIN_PATH)/kernel_test.bin

$(BIN_PATH)/kernel_test.bin: $(OBJ_PATH)/kernel.o $(OBJ_PATH)/raise.o $(OBJ_PATH)/log.o $(OBJ_PATH)/num_to_ascii.o $(OBJ_PATH)/bare_math.o $(OBJ_PATH)/test_main.o $(OBJ_PATH)/num_to_ascii_test.o $(OBJ_PATH)/test.o
	$(CC) $(LDFLAGS) -o $@ $^ $(LDLIBS)


$(OBJ_PATH)/kernel.o: $(OBJ_PATH)/raise.o $(OBJ_PATH)/log.o

$(OBJ_PATH)/raise.o: $(OBJ_PATH)/log.o

$(OBJ_PATH)/%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(OBJ_PATH)/%.o: %.s
	$(CC) $(CFLAGS) -o $@ -c $^

