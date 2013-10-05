#include <iostream>
#include "Arreglo.h"
#include "list.h"
#include "to_tex.h"

using namespace std;

int main(){
	cout<<"Testing structure: list"<<endl;
	list * l = new list();
	l->insert_at_end(1);
	l->insert_at_end(2);
	l->insert_at_end(3);
    	l->insert_at_end(4);
	l->insert_at_end(5);
	l->insert_at_beginning(6);
	l->insert_in_position(7, 2);
	l->insert_in_position(8, 2);
	l->delete_first_node();
	l->delete_last_node();
	l->delete_in_position(3);
	l->search(8);	
	l->search(44);
	string cadena = l->getCadena();
	create_tex("test.tex",cadena);

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


