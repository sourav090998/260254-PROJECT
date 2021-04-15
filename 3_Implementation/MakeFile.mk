CC=g++

CFLAG= -c -Wall

all: hello

hello: main.o rescal.o 
	$(CC) $(CFLAGS) main.c
	
rescal.o: rescal.c
	$(CC) $(CFLAGS) rescal.c
	
clean:
	rm - rf *o hello
