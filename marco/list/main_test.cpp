#include <iostream>
#include "Lista.h"
#include "to_tex.h"

using namespace std;

int main(){
   

    cout<<"Prueba de Listas"<<endl;

	Lista * l = new Lista();
	l->insertar_al_final(1);
	l->insertar_al_final(2);
	l->insertar_al_final(3);
    	l->insertar_al_final(4);
	l->insertar_al_final(5);
	l->insertar_al_inicio(6);
	l->insertar_en_medio(7, 2);
	l->insertar_en_medio(8, 2);
	string cadena = l->getCadena();
	create_tex("test.tex",cadena);
	
	
//cout<<"Los datos de la cadena son: "<< l->getCadena()<<endl;
    return 0;
}


