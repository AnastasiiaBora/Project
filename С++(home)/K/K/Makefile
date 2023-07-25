CC=gcc
CFLAGS=-std=c11 -c -Wall -Werror
LDFLAGS=-lm -lncurses

all: main

main: main.o k.o ui.o
	$(CC) main.o k.o ui.o -o main $(LDFLAGS)

main.o: main.c
	$(CC) $(CFLAGS) main.c

k.o: k.c
	$(CC) $(CFLAGS) k.c
	
ui.o: ui.c
	$(CC) $(CFLAGS) ui.c

clean:
	rm -f *.o main