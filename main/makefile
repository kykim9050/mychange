main: main.o
	gcc -o main -L../source main.o -lchange
main.o: main.c
	gcc -g -c -I../include main.c -o main.o
clean:
	rm -f *.o
