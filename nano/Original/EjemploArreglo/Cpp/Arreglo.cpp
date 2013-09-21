

#include "Arreglo.h"
#include <iostream>
using namespace std;


Arreglo::Arreglo(int n){
	cantidad=0;
	tamano=n;
	vector= new int[tamano];
	for(int i=0;i< tamano;i++){
		vector[i]=0;
   }
}

	Arreglo::~Arreglo(void){
		delete[] vector;
}

int Arreglo::eliminaElemento(){
	
	cantidad--;
	return (vector[cantidad]);

}
int Arreglo::eliminaElementoEnPosicion(int pos){
 //incompleto....
	
	return (vector[cantidad]);
}

void Arreglo::ingresarElemento(int elem){
		vector[cantidad]=elem;
		cantidad++;
}

void Arreglo::ingresarElementoEnPosicion(int elem,int pos){
  
  //cantidad vs tamaño***
	if (pos<cantidad){
		vector[pos]=elem;
		cantidad++;
	}
}

int Arreglo::sumaVector(){
	int acum=0;
		for(int i=0;i< tamano;i++){
		acum=vector[i]+acum;
   }
		this->cadena = cadena  + "\node i :)";
		return acum;
}
	void Arreglo::invierteVector(){
		int k,i, temp;
		for(i=0,k=cantidad-1;i<k;i++,k--){
			temp=vector[k];
			vector[k] = vector[i];
			vector[i]=temp;
		}
}

	void Arreglo::imprimeVector(){
		for(int i=0;i< cantidad;i++){
		cout<<vector[i]<<endl;
   }
}
	int Arreglo::getCantidad(){
		return this->cantidad;
}
	int Arreglo:: obtenerObjeto(int n){
		if(n<cantidad)
			return vector[n];
	}
	void Arreglo::intercambiarElementos(int pos1,int pos2){
		int aux;
		if(pos1<cantidad && pos2<cantidad){
			aux=vector[pos1];
			vector[pos1]=vector[pos2];
			vector[pos2]=aux;
		}	
	}
	
 int Arreglo:: frecuencia(int elemento){
  int cont=0;
  for(int i=0;i<getCantidad();i++)
	  if(obtenerObjeto(i)==elemento)
			cont++;
	return cont;
 }

 int Arreglo::calculaModa() {
	int  posModa=0;
	int moda=0;
	for(int i=0;i<getCantidad()-1;i++)
		if(frecuencia(obtenerObjeto(i))>moda){
			posModa=i;
			moda=frecuencia(obtenerObjeto(i));
		}
	return obtenerObjeto(posModa);
}

void Arreglo:: llenarVector(int cantidad){
	int elemento=0;
	cout<<"Ingrese "<<cantidad<<" elementos"<<endl;
	for(int i=0;i<cantidad;i++){
			cin>>elemento;
			ingresarElemento(elemento);
		}
}

 int Arreglo:: calculaPromedio() {
	 int  promedio=0;
	 int elemento=0;
	 for(int i=0;i<getCantidad();i++)
			promedio+=obtenerObjeto(i);
		return  promedio;
}

 int Arreglo::Max() {
  	 int  maximo;
	 maximo=obtenerObjeto(0);
	 for(int i=0;i<getCantidad();i++)
		if(obtenerObjeto(i)>maximo)
			maximo=obtenerObjeto(i);
	return maximo;
 }

 int Arreglo:: min() {
  	 int  minimo;
	 minimo=obtenerObjeto(0);
	 for(int i=0;i<getCantidad()-1;i++)
		if(obtenerObjeto(i)<minimo)
			minimo=obtenerObjeto(i);
	return minimo;
 }

 bool Arreglo:: buscarElemento(int elemento){
   
   //encuentra el primer elemento lineal
  for(int i=0;i<getCantidad()-1;i++)
	  if(obtenerObjeto(i)==elemento)
			return true;
  return false;
 }

void Arreglo:: buscarElementos(){
  int elemento,num1,num2;
  cout<<"Ingrese "<<10<<" elementos"<<endl;
  for(int i=0;i<10;i++){
		cin>>elemento;
		ingresarElemento(elemento);
  }
  cout<<"Digite dos numeros"<<endl;
  cin>>num1;
  if( buscarElemento(num1))
	   cout<<"Se encontro el numero en el vector"<<endl;
  else
	  cout<<"No se encontro el numero en el vector"<<endl;
  cin>>num2;
  if( buscarElemento(num2))
	   cout<<"Se encontro el numero en el vector"<<endl;
  else
	  cout<<"No se encontro el numero en el vector"<<endl;
 }

void Arreglo:: ordenar(){
	int  posMinimo;
	for(int i=0;i<getCantidad();i++){
		posMinimo=i;
		for(int j=i;j<getCantidad();j++){
			if(obtenerObjeto(j)<obtenerObjeto(posMinimo))
				posMinimo=j;
		}
		intercambiarElementos(i,posMinimo);
	}
}

void Arreglo::limpiaVector(){
		for(int i=0;i< tamano;i++){
		vector[i]=0;
   }

}

string Arreglo::getCadena(){
	cout<<"Los datos del arreglo son: "<<endl;
	return this->cadena;

}
