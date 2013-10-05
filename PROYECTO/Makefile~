all: main

main: to_tex.o Latex.o Nodo.o Lista.o Arreglo.o main.o
	g++ to_tex.o Latex.o Nodo.o Lista.o Arreglo.o main.o -o main
to_tex.o: to_tex.cpp
	g++ -c to_tex.cpp

Latex.o: Latex.cpp
	g++ -c Latex.cpp

Nodo.o: Nodo.cpp
	g++ -c Nodo.cpp

Lista.o: Lista.cpp
	g++ -c Lista.cpp

Arreglo.o: Arreglo.cpp
	g++ -c Arreglo.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -rf *o main

