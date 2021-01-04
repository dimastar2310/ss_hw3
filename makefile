
FLAGS= -Wall -g

all:main_isort main_txtfind 
#pashut tafil et main
#sequence of rulles
main_isort:main_isort.o isort.o 
	gcc $(FLAGS) -o main_sort main_isort.o isort.o

main_txtfind:main_txtfind.o txtfind.o #be mida ve eshnui tekampel li txxtfind.c shuv
	gcc $(FLAGS) -o main_txtfind main_txtfind.o txtfind.o
#main_txtfind:main_txtfind.o txtfind.o
	
main_isort.o: main_isort.c isort.h  
	gcc $(FLAGS) -c  main_isort.c


isort.o:isort.c isort.h #be mida ve eshnui tekampel li isort.c shuv
	gcc $(FLAGS) -c isort.c

main_txtfind.o:main_txtfind.c txtfind.h #be mida ve eshnui tekampel li txxtfind.c shuv
	gcc $(FLAGS) -c  main_txtfind.c

txtfind.o:txtfind.c txtfind.h
	gcc $(FLAGS) -c txtfind.c
	
run1: main_txtfind 
	./main_txtfind
run2: main_isort
	./main_isort



.PHONY: clean all
#remove mitbazea rak ad .so yashir yashir rak maind mains
clean:
	rm -f *.o *.a *.so main_sort main_txtfind
