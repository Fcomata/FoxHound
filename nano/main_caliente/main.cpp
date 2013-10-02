#include <iostream>
#include <sstream>
#include <string>


int main (){

int menu =1;

while (menu >0){


cout<<"Menu Principal \n Que estructura Abstracta desea usar \n 1) Arreglo \n 2) Lista \n 3) Arbol Binario \n 0) Salir"<<endl;

cin>>menu;

if (menu==1){

int menuArreglo=0;

string nombre =getNombre();

Arreglo * nombre = new Arreglo(); ///SE PUEDE????

cout<<"Menu de Arreglos: \n 1)Llenar Vector \n 2)Insertar Elemento \n 3)Elimina Elemento \n 4)Ingresar Elemento en Posicion\n 5)Elimina Elemento en Posicion\n 6)Intercambiar Elementos\n 7)Invierte Vector \n 8)Maximo \n 9) Minimo \n 10)Ordenar \n 0)Salir"<<endl;
	
cin>>menuArreglo;

switch (menuArreglo){

	case 0: 

	break;

	case 1:

		int cantidad=0;

		cout<<"Ingrese la cantidad de elementos que desea introducir"<<endl;

		cin>>cantidad;

		nombre->llenarVector(cantidad);

	break;

	case 2:

		int elemento=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		nombre->ingresarElemento(elemento);

	break;

	case 3:

		nombre->eliminaElemento();

	break;

	case 4:

		int elemento=0;

		int posicion=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		cout<<"Ingrese la posicion"<<endl;

		cin>>posicion;

		nombre->ingresarElementoEnPosicion(elemento,posicion);

	break;

	case 5:

		int posicion=0;

		cout<<"Ingrese la posicion"<<endl;

		cin>>posicion;

		nombre->eliminaElementoEnPosicion(posicion);

	break;

	case 6:

		int posicion1=0;

		int posicion2=0;

		cout<<"Ingrese la posicion #1"<<endl;

		cin>>posicion1;

		cout<<"Ingrese la posicion #2"<<endl;

		cin>>posicion2;

		nombre->intercambiarElementos(posicion1,posicion2);

	break;

	case 7:

		nombre->invierteVector();
	
	break;

	case 8:

		nombre->Max();

	break;

	case 9:

		nombre->min();

	break;

	case 10:

		nombre->ordenar();

	break;
		
		

	}	

}




if (menu==2){

int menuLista=0;

string nombre =getNombre();

Lista * nombre = new Lista(); ///SE PUEDE????

cout<<"Menu de Lista: \n 1)Insertar Elemento \n 2)Elimina Elemento \n 3)Buscar Elemento \n 0)Salir"<<endl;
	
cin>>menuLista;

switch (menuLista){

	case 0: 

	break;

	case 1:

		int elemento=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		nombre->insertar(elemento);

	break;

	case 2:

		int elemento=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		nombre->borrar(elemento);

	break;

	case 3:

		int elemento=0;

		cout<<"Ingrese el elemento"<<endl;

		cin>>elemento;

		nombre->buscar(elemento);

	break;



}


if (menu==3){}




}

string getNombre(){

string nombre ="";

cout<<"Inserte el nombre del elemento"<<endl;

cin>>nombre;

return nombre;
}



}
