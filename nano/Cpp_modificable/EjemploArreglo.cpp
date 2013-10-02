#include <iostream>
#include "Arreglo.h"
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
	l->mostrar();
	cout<<"Los datos de la cadena son: "<< l->getCadena()<<endl;
	create_tex("listas.tex",l->getCadena());

    cout<<"Prueba de Arreglos"<<endl;

    	Arreglo * a= new Arreglo(5);
    	a->ingresarElemento(5);
    	a->ingresarElemento(4);
    	a->ingresarElemento(3);
    	a->ingresarElemento(2);
    	a->ingresarElemento(1);
	a->buscarElemento(3);
	a->eliminaElementoEnPosicion(2);
	a->ingresarElementoEnPosicion(4,14);
	a->buscarElemento(14);
	a->ordenar();
	a->limpiaVector();


    cout<<"El suma es: " << a->sumaVector()<<endl;
    cout<<a->getCadena();
    create_tex("arreglos.tex",a->getCadena());
    cin.get();
    return 0;
}


