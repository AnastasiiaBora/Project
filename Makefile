CC = gcc
CFLAGS = -Wall -Wextra
 
all: project
 
project.o: project.c
    $(CC) $(CFLAGS) -c project.c -o project.o
 
libproject.a: project.o
    ar rcs libproject.a project.o
 
executable: fire.c libproject.a
    $(CC) $(CFLAGS) fire.c -o executable -L. -lproject
 
clean:
    rm -f project.o libproject.a executable