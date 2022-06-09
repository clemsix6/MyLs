CC = gcc
CFLAGS = -W -Wall -Werror -Wextra

LIB_SRC = ./*.c
LIB_OBJ = ./*.o
TARGET_LIB = libmy.a

all:
	$(CC) $(LIB_SRC) $(CFLAGS) -c
	ar rsc $(TARGET_LIB) $(LIB_OBJ)
debug:
	$(CC) $(LIB_SRC) $(CFLAGS) -c -ggdb
	ar rsc $(TARGET_LIB) $(LIB_OBJ)
clean:
	rm -f $(LIB_OBJ)
	rm -f $(TARGET_LIB)