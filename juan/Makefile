all: main

main: Latex.o tree.o ejemplo.o
	g++ Latex.o tree.o ejemplo.o -o main

Latex.o: Latex.cpp
	g++ -c Latex.cpp

tree.o: tree.cpp
	g++ -c tree.cpp

ejemplo.o: ejemplo.cpp
	g++ -c ejemplo.cpp

clean:
	rm -rf *log *aux *o *synctex.gz *pdf main

