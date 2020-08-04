CC=gcc
CFLAGS=-Wall -g

INC_DIR:=inc
OBJ_DIR:=obj
BIN_DIR:=bin
SRC_DIR:=src

SRC_FILES:=$(wildcard $(SRC_DIR)/*.c)
OBJ_FILES:=$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

MODULES:=main

all: $(OBJ_FILES)
	$(CC) $^ -o $(BIN_DIR)/LucyK.exe $(CFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c $^ -o $@ -I $(INC_DIR) $(CFLAGS)

clean:
	rm bin/* obj/*