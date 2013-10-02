all: main

main: Latex.o main.o tree.o
	g++ Latex.o main.o tree.o -o main

tree.o: tree.cpp
	g++ -c tree.cpp

main.o: main.cpp
	g++ -c main.cpp

Latex.o: Latex.cpp
	g++ -c Latex.cpp

clean:
	rm -rf *o main
