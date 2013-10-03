#include <iostream>
#include "Lista.h"
#include "to_tex.h"

using namespace std;

int main(){
   

    cout<<"Prueba de Listas"<<endl;

	Lista * l = new Lista();
	l->insertar(2);
	l->insertar(90);
    	l->insertar(60);
	l->insertar(-5);
	l->insertar(15);
	l->insertar(120);
	l->insertar(170);
	l->insertar(220);
	l->mostrar();
	string cadena = l->getCadena();
	create_tex(cadena);
	cout<<"Los datos de la cadena son: "<< l->getCadena()<<endl;
    return 0;
}


