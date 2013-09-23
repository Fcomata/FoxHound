
#include "Lista.h"
#include <iostream>
using namespace std;


Lista::Lista(){
	primero=actual=NULL;
	cant=0;
}
Lista::~Lista(){
	elPrimero();
	while(primero){
	elPrimero();
	primero=primero->getS();
	delete actual;
}
actual=NULL;
primero=NULL;
}
void Lista::insertar(int v){
	elPrimero();
//Lista Vacia
	if(primero==NULL || primero->getV()>v){
primero=new Nodo(v,primero);

cadena+="bla";

}
else
{
//Buscar el nodo de valor menor a v
while(actual->getS()&&actual->getS()->getV() <=v)
{actual=actual->getS();}
actual->setS(new Nodo(v,actual->getS()));
}
	cant++;// cant = cant +1
}

bool Lista::buscar(int v){
Nodo* anterior=NULL;
elPrimero();
while(actual!=NULL){
	if(actual->getV()==v){
			return true;
	}
	actual=actual->getS();
}
return false;
}

void Lista::borrar(int v){//Busca y elimina un nodo determinado
Nodo* anterior=NULL;
elPrimero();
while(actual && actual->getV()!=v){
anterior=actual;
actual=actual->getS();
}
if(!actual || actual->getV() !=v)//Si no lo encontro
return;
else{//Borrar el nodo
if(!anterior)//si es el primer elemento
primero=actual->getS();
else//si es un elemento intermedio o el ultimo
anterior->setS( actual->getS());
delete actual;
}
}

//----------------------------------------------------------------------------------------------------------------
void Lista::mostrar(){

elPrimero();
cout<<"Contenido de la lista:"<<endl;
while(actual!=NULL){
cout<<actual->getV()<<endl;
actual=actual->getS();
this->cadena += "Hola";
}
cout<<endl;
}



//----------------------------------------------------------------------------------------------------------------
void Lista::elSiguiente(){
if(actual)
actual=actual->getS();
}
//----------------------------------------------------------------------------------------------------------------
void Lista::elPrimero(){
actual=primero;
}
//----------------------------------------------------------------------------------------------------------------
void Lista::elUltimo(){
elPrimero();
if(primero!=NULL)
while(actual->getS())elSiguiente();
}
//----------------------------------------------------------------------------------------------------------------
bool Lista::elActual(){
return actual!=NULL;
}
//----------------------------------------------------------------------------------------------------------------
int Lista::valorActual(){
return actual->getV();
}
//--------------------------------------------

string Lista::getCadena(){
	cout<<"Los datos del arreglo son: "<<endl;
	return this->cadena;

}