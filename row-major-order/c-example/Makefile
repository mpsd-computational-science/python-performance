FLAGS=-O2

all: majorrow majorcol 

majorcol: majorcol.c Makefile
	gcc $(FLAGS) -ansi -Wall -pedantic -o majorcol majorcol.c

majorrow: majorcol.c Makefile
	gcc $(FLAGS) -ansi -Wall -pedantic -o majorrow majorrow.c

demo:
	time ./majorcol
	time ./majorrow
