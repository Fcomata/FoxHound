#include "Nodo.h"
#include <iostream>

using namespace std;

Nodo::Nodo(int v, Nodo *sig=NULL){
	this->valor= v;
	siguiente=sig;
}
Nodo::~Nodo(){
}
void Nodo::setV (int v) { 
	this->valor= v; 
}
void Nodo::setS (Nodo *s) { 
	this->siguiente=s; 
}

int Nodo::getV (){ 
	return this->valor; 
}
Nodo * Nodo::getS (){ 
	return this->siguiente; 
}
