all: main

main: to_tex.o Latex.o list_node.o list.o main_test.o
	g++ to_tex.o Latex.o list_node.o list.o main_test.o -o main

to_tex.o: to_tex.cpp
	g++ -c to_tex.cpp

Latex.o: Latex.cpp
	g++ -c Latex.cpp

list_node.o: list_node.cpp
	g++ -c list_node.cpp

list.o: list.cpp
	g++ -c list.cpp

main_test.o: main_test.cpp
	g++ -c main_test.cpp

clean:
	rm -rf *o main

