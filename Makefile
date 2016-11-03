all: project
project: math.o test.o
	gcc math.o test.o -o project
math.o: math.h math.c
	gcc -c math.c
test.o: math.h test.c
	gcc -c test.c
clean:
	rm project *.o
