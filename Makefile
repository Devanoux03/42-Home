CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = $(wildcard *.c)

compile :
	$(CC) $(CFLAGS) $(SRC)
