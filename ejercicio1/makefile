main.exe: main.o funciones.o
	gcc -o main.exe main.o funciones.o

main.o: main.c funciones.h
	gcc -c main.c 

funciones.o: funciones.c funciones.h
	gcc -c funciones.c