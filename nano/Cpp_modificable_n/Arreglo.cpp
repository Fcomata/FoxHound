#include "Arreglo.h"
#include <iostream>
#include <sstream>

using namespace std;


Arreglo::Arreglo(int n){

	cantidad=0;
	altura=2;
	tamano=n;
	vector= new int[tamano];

	for(int i=0;i< tamano;i++){

		vector[i]=0;

   }

begin();

	for(int i=0; i<tamano; i++){

		this->cadena += "\n \\node (rectangle) at (";
		this->cadena += Convertir(2*i);
		this->cadena += ",";
		this->cadena += Convertir(altura);
		this->cadena += ") [draw,thick,minimum width=2cm,minimum height=5mm] {";
		this->cadena += Convertir(0); 
		this->cadena += "};";

	}
end();

}

	Arreglo::~Arreglo(void){
		delete[] vector;
		
}



int Arreglo::eliminaElemento(){



	vector[cantidad]=0;
	cantidad--;
	LatexTodo();
end();
	return (vector[cantidad]);

}

void Arreglo::eliminaElementoEnPosicion(int pos){



	vector[pos]=0;
	cantidad--;
	LatexTodo();
end();
}

void Arreglo::ingresarElemento(int elem){




		vector[cantidad]=elem;
		cantidad++;
		LatexTodo();
end();
}


void Arreglo::ingresarElementoEnPosicion(int elem,int pos){

  
  //cantidad vs tamaño***

	if (pos<cantidad){

		LatexTodo();
		vector[pos]=elem;
		cantidad++;
		
		LatexResaltar(pos,altura+1,elem,"red");
	}
}

int Arreglo::sumaVector(){

	int acum=0;

	for(int i=0;i< tamano;i++){

		acum=vector[i]+acum;
   }

		return acum;
}

void Arreglo::invierteVector(){

		int k,i, temp;

		for(i=0,k=cantidad-1;i<k;i++,k--){
			temp=vector[k];
			vector[k] = vector[i];
			vector[i]=temp;
		}

LatexTodo();
end();


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

//LatexTodo(); FORRRR
//Latex(pos1,altura,vector[pos1]);
//LatexTodo();
//Latex(pos2,altura,vector[pos2]);

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

	for(int i=0;i<tamano;i++){
			cin>>elemento;
			ingresarElemento(elemento);
		}


LatexTodo();
end();
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
	 int aux;
	 maximo=obtenerObjeto(0);
	 for(int i=0;i<getCantidad();i++){
		if(obtenerObjeto(i)>maximo){
			maximo=obtenerObjeto(i);
			aux=i;
		}
	}
LatexTodo();
LatexResaltar(aux,altura,vector[aux],"red");


	return maximo;
 }

 int Arreglo:: min() {

  	 int  minimo;
	 int aux;
	 minimo=obtenerObjeto(0);
	 for(int i=0;i<getCantidad()-1;i++){

		if(obtenerObjeto(i)<minimo){
			minimo=obtenerObjeto(i);
			aux=i;
		}
	}

LatexResaltar(aux,altura,vector[aux],"green");

	return minimo;
 }

 bool Arreglo:: buscarElemento(int elemento){
   
   //encuentra el primer elemento lineal

  for(int i=0;i<getCantidad()-1;i++)

	  if(obtenerObjeto(i)==elemento){
LatexTodo();
LatexResaltar(i,altura,vector[i],"green");	


	return true;

		}
  return false;
 }


void Arreglo:: ordenar(){

	int  posMinimo;

	for(int i=0;i<getCantidad();i++){

		posMinimo=i;

		for(int j=i;j<getCantidad();j++){

			if(obtenerObjeto(j)<obtenerObjeto(posMinimo)){

				posMinimo=j;
			}
		}

		intercambiarElementos(i,posMinimo);
	}
		

LatexTodo();
end();

}

void Arreglo::limpiaVector(){

		for(int i=0;i< tamano;i++){
		vector[i]=0;
   }

LatexTodo();
end();


}

string Arreglo::getCadena(){

	cout<<"Los datos del arreglo son: "<<endl;
	
	return this->cadena;

}

void Arreglo::Latex(int posx, int posy, int valor){


		this->cadena += "\n \\node (rectangle) at (";
		this->cadena += Convertir(posx);
		this->cadena += ",";
		this->cadena += Convertir(posy);
		this->cadena += ") [draw,thick,minimum width=2cm,minimum height=5mm] {";
		this->cadena += Convertir(valor); 
		this->cadena += "};";

end();
}

void Arreglo::LatexTodo(){

begin();

	for(int i=0; i<tamano; i++){

		this->cadena += "\n \\node (rectangle) at (";
		this->cadena += Convertir(2*i);
		this->cadena += ",";
		this->cadena += Convertir(altura);
		this->cadena += ") [draw,thick,minimum width=2cm,minimum height=5mm] {";
		this->cadena += Convertir(vector[i]); 
		this->cadena += "};";

	}

}

void Arreglo::LatexCantidad(){

begin();

	for(int i=0; i<cantidad; i++){

		this->cadena += "\n \\node (rectangle) at (";
		this->cadena += Convertir(2*i);
		this->cadena += ",";
		this->cadena += Convertir(altura);
		this->cadena += ") [draw,thick,minimum width=2cm,minimum height=5mm] {";
		this->cadena += Convertir(vector[i]); 
		this->cadena += "};";

	}

}

void Arreglo::LatexResaltar(int posx, int posy, int valor, string color){


		this->cadena += "\n \\node (rectangle) at (";
		this->cadena += Convertir(2*posx);
		this->cadena += ",";
		this->cadena += Convertir(posy);
		this->cadena += ") [draw,thick,fill=";
		this->cadena += color;
		this->cadena += ",minimum width=2cm,minimum height=5mm] {";
		this->cadena += Convertir(valor); 
		this->cadena += "};";

end();
}

string Arreglo::Convertir(int valor){

stringstream s1;
s1<<valor;
return s1.str();

}

void Arreglo::begin (){

this->cadena += "\n \\begin{frame}";
this->cadena+="\n \\begin{tikzpicture} \n";

}

void Arreglo::end(){

this->cadena+="\n\n \\end{tikzpicture} \n";
this->cadena += " \\end{frame} \n";

}


