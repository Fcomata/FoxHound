#include <iostream>
#include <sstream>
#include <string>
#include "Arreglo.h"
#include "list.h"
#include "to_tex.h"

using namespace std;

int main (){

int cantidad;
int elemento;
int posicion;
int posicion2;

int menu =1;

while (menu!=0){


cout<<"\n \n---- Menu Principal ---- \n Que estructura Abstracta desea usar \n 1) Arreglo \n 2) Lista \n 3) Arbol Binario \n 0) Salir"<<endl;

cin>>menu;

if (menu==1){

int menuArreglo=1;

int tamano=0;

cout<<"Ingrese el tamaño del arreglo"<<endl;

cin>>tamano;

Arreglo * A = new Arreglo(tamano); 

while(menuArreglo!=0){	


cerr<<"Menu de Arreglos: \n 1)Llenar Vector \n 2)Insertar Elemento \n 3)Elimina Elemento \n 4)Ingresar Elemento en Posicion\n 5)Elimina Elemento en Posicion\n 6)Intercambiar Elementos\n 7)Limpia vector\n 8)Maximo \n 9) Minimo  \n 10)Busca Elemento \n 11)Ordenar \n 12)Limpia Vector \n 13)Invierte Vector \n 0)Salir"<<endl;
	
cin>>menuArreglo;

switch (menuArreglo){

	case 0: 
		menuArreglo=0;

		create_tex("Arreglo.tex",A->getCadena());
		
	break;

	case 1:

		cantidad=0;

		cout<<"Ingrese la cantidad de elementos que desea introducir"<<endl;

		cin>>cantidad;

		A->llenarVector(cantidad);

	break;

	case 2:

		elemento=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		A->ingresarElemento(elemento);

	break;

	case 3:

		A->eliminaElemento();

	break;

	case 4:

		elemento=0;

		posicion=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		cout<<"Ingrese la posicion"<<endl;

		cin>>posicion;

		A->ingresarElementoEnPosicion(elemento,posicion);

	break;

	case 5:

		posicion=0;

		cout<<"Ingrese la posicion"<<endl;

		cin>>posicion;

		A->eliminaElementoEnPosicion(posicion);

	break;

	case 6:

		posicion=0;

		posicion2=0;

		cout<<"Ingrese la posicion #1"<<endl;

		cin>>posicion;

		cout<<"Ingrese la posicion #2"<<endl;

		cin>>posicion2;

		A->intercambiarElementos2(posicion,posicion2);

	break;

	case 7:

		A->limpiaVector();
	
	break;

	case 8:

		A->Max();

	break;

	case 9:

		A->min();

	break;

	case 10:

		elemento=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		A->buscarElemento(elemento);

	break;

	case 11:

		A->ordenar();

	break;


	case 12:

		A->limpiaVector();

	break;

	case 13:

		A->invierteVector();

	break;


		
		

	}//end switch

  }//end while	

}//end if(menu==1)




if (menu==2){

int menuLista=1;

while(menuLista!=0){

cout<<"\n Menu de Listas: \n 1)Pila \n 2)Cola (FO/LI) \n 3)Lista Simple \n 0)Salir \n"<<endl;

cin>>menuLista;

if(menuLista==1){

	list * Pila = new list(); 

	int menuPila=1;

	while(menuPila!=0){

		cout<<"Menu de Pila: \n 1)Insertar Elemento \n 2)Elimina Elemento \n 3)Buscar Elemento \n 0)Salir"<<endl;

		cin>>menuPila;

   switch (menuPila){

	case 0: 

		create_tex("Pila.tex",Pila->getCadena());

	break;

	case 1:

		elemento=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		Pila->insert_at_end(elemento);

	break;

	case 2:


		Pila->delete_last_node();

	break;

	case 3:

		elemento=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		Pila->search(elemento);

	break;



	}//end switch

    }//end while

}//en if()

if(menuLista==2){

list * Cola = new list();

int menuCola=1;

while(menuCola!=0){

cout<<"Menu de Cola(FO/LI): \n 1)Insertar Elemento \n 2)Elimina Elemento \n 3)Buscar Elemento \n 0)Salir"<<endl;

cin>>menuCola;

switch (menuCola){

	case 0: 

		create_tex("Cola.tex",Cola->getCadena());

	break;

	case 1:

		elemento=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		Cola->insert_at_end(elemento);

	break;

	case 2:

		Cola->delete_first_node();

	break;

	case 3:

		elemento=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		Cola->search(elemento);

	break;


   }//end switch
	
 }//end while

}//en if()


if(menuLista==3){

list * Simple = new list();

int menuSimple=1;

while(menuSimple!=0){

cout<<"Menu de Lista Simple: \n 1)Insertar Elemento al Inicio \n 2)Insertar Elemento al Medio \n 3)Insertar Elemento al Final \n 4)Elimina Elemento al Inicio \n 5)Elimina Elemento al Medio \n 6)Elimina Elemento al Final  \n 7)Buscar Elemento \n 0)Salir"<<endl;

cin>>menuSimple;

switch (menuSimple){

	case 0: 

		create_tex("ListaSimple.tex",Simple->getCadena());

	break;

	case 1:

		elemento=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		Simple->insert_at_beginning(elemento);

	break;

	case 2:

		elemento=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		posicion=0;

		cout<<"Ingrese la posicion"<<endl;

		cin>>posicion;

		Simple->insert_in_position(elemento, posicion);

	break;

	case 3:

		elemento=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		Simple->insert_at_end(elemento);
	break;


	case 4: 

		Simple->delete_first_node();

	break;


	case 5: 

		posicion=0;

		cout<<"Ingrese la posicion"<<endl;

		cin>>posicion;

		Simple->delete_in_position(posicion);

	break;



	case 6: 

		Simple->delete_last_node();

	break;


	case 7: 

		elemento=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		Simple->search(elemento);

	break;



	}//end switch 

     }//en while

   }//end menu Lista Simple

 }// end while general

}//end if(menu==2);



if (menu==3){

//tree * Arbol = new tree();

int menuTree=0;



	}//end if(menu==3)

    }//en while(menu=!0)

}//end main
