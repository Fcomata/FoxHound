all: main

main: Latex.o Nodo.o Lista.o Arreglo.o EjemploArreglo.o
	g++ Latex.o Nodo.o Lista.o Arreglo.o EjemploArreglo.o -o main

Latex.o: Latex.cpp
	g++ -c Latex.cpp

Nodo.o: Nodo.cpp
	g++ -c Nodo.cpp

Lista.o: Lista.cpp
	g++ -c Lista.cpp

Arreglo.o: Arreglo.cpp
	g++ -c Arreglo.cpp

EjemploArreglo.o: EjemploArreglo.cpp
	g++ -c EjemploArreglo.cpp

clean:
	rm -rf *o main

