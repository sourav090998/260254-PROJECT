a.out: hello

hello: main.o rescal.o 
	gcc main.o rescal.o -o hello
	
main.o:  main.c
	gcc -c main.c
	 
rescal.o: rescal.c
	gcc -c rescal.c
	
clean:
	rm - rf *o hello

