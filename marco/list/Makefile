all: main

main: to_tex.o Latex.o Nodo.o Lista.o main_test.o
	g++ to_tex.o Latex.o Nodo.o Lista.o main_test.o -o main

to_tex.o: to_tex.cpp
	g++ -c to_tex.cpp

Latex.o: Latex.cpp
	g++ -c Latex.cpp

Nodo.o: Nodo.cpp
	g++ -c Nodo.cpp

Lista.o: Lista.cpp
	g++ -c Lista.cpp

main_test.o: main_test.cpp
	g++ -c main_test.cpp

clean:
	rm -rf *o main

