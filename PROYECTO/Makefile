all: main

main: to_tex.o latex.o list_node.o list.o array.o tree.o main.o 
	g++ to_tex.o latex.o list_node.o tree.o list.o array.o main.o -o main

to_tex.o: to_tex.cpp
	g++ -c to_tex.cpp

latex.o: latex.cpp
	g++ -c latex.cpp

list_node.o: list_node.cpp
	g++ -c list_node.cpp

list.o: list.cpp
	g++ -c list.cpp

array.o: array.cpp
	g++ -c array.cpp

main.o: main.cpp
	g++ -c main.cpp

tree.o: tree.cpp
	g++ -c tree.cpp

clean:
	rm -rf *o main

