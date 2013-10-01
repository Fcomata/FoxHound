#include "Lista.h"
#include <iostream>
#include <sstream>

using namespace std;


   Lista::Lista(){

	primero=actual=NULL;
	cant=0;
 	begin();
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

	}
	else {
		//Buscar el nodo de valor menor a v
		while(actual->getS()&&actual->getS()->getV() <=v){
		actual=actual->getS();}
		actual->setS(new Nodo(v,actual->getS()));
	}
	cant++;
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
	anterior	=actual;
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
	for(int i=1; i<=cant;i++){
	int v=actual->getV();
	cout<<v<<endl;
	actual=actual->getS();

	cadena+="\\node[main_node] (";
	cadena+=Convertir(i);
	cadena+=")";
	if(i>1){
	cadena+="[right of=";
	cadena+=Convertir(i-1);
	cadena+="]";}
	cadena+=" {";
	cadena+=Convertir(v);
	cadena+="}; \n";	
    }
//Nodo null, siempre al final
	this->cadena+="\\node[main_node] (null) [right of=";
	this->cadena+=Convertir(cant);
	this->cadena+="] {Null};\n\n";
	this->cadena+="\\path[every node/.style={font=\\sffamily\\small}]\n";
	for(int i=1; i<cant;i++){
//Flechas, se dibujan todas menos la que apunta a null
	this->cadena+="(";
	this->cadena+=Convertir(i);
	this->cadena+=") edge [left] node [left] {} (";
	this->cadena+=Convertir(i+1);
	this->cadena+=")\n";
	}
//Flecha de el ultimo nodo a null
this->cadena+="(";
	this->cadena+=Convertir(cant);
	this->cadena+=") edge [left] node [left] {} (";
	this->cadena+="null";
	this->cadena+=");\n";

end();
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
//----------------------------------------------------
void Lista::begin (){

this->cadena += "\n \\begin{frame}";
this->cadena+="\n \\begin{tikzpicture}[shorten >=1pt,->]";
this->cadena+="\n \\tikzstyle{main_node}=[rectangle,fill=black!25,minimum size=20pt,inner sep=0pt] \n";

}

void Lista::end(){
this->cadena+="\n\n \\end{tikzpicture} \n";
this->cadena += " \\end{frame} \n";

}

string Lista::Convertir(int valor){
stringstream s1;
s1<<valor;
return s1.str();
}



