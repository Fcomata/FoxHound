// EjemploArreglo.cpp: define el punto de entrada de la aplicación de consola.
//


#include <iostream>
#include <cstdlib>
using namespace std;

#include "Arreglo.h"
#include "Lista.h"

int main(int argc, char *argv[])//int main
{
	
	//--------------------------

	cout<<"Prueba de Listas"<<endl;

	Lista *l = new Lista();
	l->insertar(2);
	l->insertar(90);
    	l->insertar(60);
	l->mostrar();
	cout<<"Los datos de la cadena son: "<< l->getCadena()<<endl;
	//--------------------------

	cout<<"Prueba de Arreglos"<<endl;

	Arreglo * a= new Arreglo(5);
	a->ingresarElemento(45);
	a->ingresarElemento(3);
	a->ingresarElemento(1);
	a->ingresarElemento(8);
	a->ingresarElemento(9);
	cout<<"El suma es: " << a->sumaVector()<<endl;
	cout<<a->getCadena();
	system("pause");// no se puede usar cambiar por cin.get()
	return 0;
}
