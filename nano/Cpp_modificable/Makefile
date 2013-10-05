all: main

main: to_tex.o Latex.o list_node.o list.o Arreglo.o EjemploArreglo.o
	g++ to_tex.o Latex.o list_node.o list.o Arreglo.o EjemploArreglo.o -o main
to_tex.o: to_tex.cpp
	g++ -c to_tex.cpp

Latex.o: Latex.cpp
	g++ -c Latex.cpp

list_node.o: list_node.cpp
	g++ -c list_node.cpp

list.o: list.cpp
	g++ -c list.cpp

Arreglo.o: Arreglo.cpp
	g++ -c Arreglo.cpp

EjemploArreglo.o: EjemploArreglo.cpp
	g++ -c EjemploArreglo.cpp

clean:
	rm -rf *o main

