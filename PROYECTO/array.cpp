#include "array.h"
#include <iostream>
#include <sstream>

using namespace std;


array::array(int n){
	amount=0;
	height=2;
	size=n;
	vector= new int[size];
	for(int i=0;i< size;i++){
		vector[i]=9999;
   }

begin("Inicializador");
	for(int i=0; i<size; i++){
		this->cadena += "\n \\node (rectangle) at (";
		this->cadena += to_string(2*i);
		this->cadena += ",";
		this->cadena += to_string(height);
		this->cadena += ") [draw,thick,minimum width=2cm,minimum height=5mm] {9999};";
	}
end();

}

	array::~array(void){
		delete[] vector;
		
}



int array::delete_element(){

amount=0;
while(vector[amount]!=9999){

amount++;
}

	vector[amount]=9999;
	amount--;
	latex_all("Elimina elemento");
	end();
	return (vector[amount]);

}

void array::delete_element_in_pos(int pos){


	latex_all("Elimina elemento en posicion");
	vector[pos]=9999;
	amount--;
	latex_highlight(pos,height-1,vector[pos],"blue");
	end();
}

void array::insert_element(int elem){



if(amount==size){

		latex_all("Error al Ingresar elemento, Vector LLeno");
		end();

	}


else{
		vector[amount]=elem;
		amount++;
		latex_all("Ingresa elemento");
		end();
	}
}


void array::insert_element_in_pos(int elem,int pos){

  
  //amount vs tamaño***

	if (pos<size){

		latex_all("Ingresa elemento en posicion");
		vector[pos]=elem;
		amount++;
		latex_highlight(pos,height+1,elem,"red");
		end();
	}
}

int array::sum_vector(){

	int acum=0;

	for(int i=0;i< size;i++){

		acum=vector[i]+acum;
   }

		return acum;
}

void array::invest_vector(){

		int k,i, temp;

		for(i=0,k=amount-1;i<k;i++,k--){
			temp=vector[k];
			vector[k] = vector[i];
			vector[i]=temp;
		}

latex_all("Invierte Vector");
end();


}

	void array::print_vector(){

	for(int i=0;i< amount;i++){

		cout<<vector[i]<<endl;
  	 }
}

	int array::get_amount(){

		return this->amount;
}

	int array:: get_objet(int n){

		if(n<amount)
			return vector[n];
}

	void array::exchange_elements(int pos1,int pos2){

		int aux;
		if(pos1<amount && pos2<amount){
			aux=vector[pos1];
			vector[pos1]=vector[pos2];
			vector[pos2]=aux;

		}	
	}

	void array::exchange_elements2(int pos1,int pos2){

		int aux;

		if(pos1<amount && pos2<amount){



			aux=vector[pos1];

	latex_all("Intercambiar elementos Pos1 a Pos2");
	latex_highlight(pos1,height+1,vector[pos2],"red");
	latex_highlight(pos2,height+1,aux,"blue");
	end();

			vector[pos1]=vector[pos2];
			vector[pos2]=aux;

	latex_all("Intercambiar elementos Terminado");
	end();

		}	
	}
	
 int array:: frequency(int elemento){

  int cont=0;
  for(int i=0;i<get_amount();i++)
	  if(get_objet(i)==elemento)
			cont++;
	return cont;
 }

 int array::mode() {
	int  posModa=0;
	int moda=0;
	for(int i=0;i<get_amount()-1;i++)
		if(frequency(get_objet(i))>moda){
			posModa=i;
			moda=frequency(get_objet(i));
		}
	return get_objet(posModa);
}

void array:: fill_vector(int amount){

	int elemento=0;
	cout<<"Ingrese "<<amount<<" elementos"<<endl;

	for(int i=0;i<amount;i++){
			cin>>elemento;
			insert_element(elemento);
		}


latex_all("Finalizada Funcion: LLenar Vector");
end();
}

 int array:: arithmetic_mean() {

	 int  promedio=0;
	 int elemento=0;
	 for(int i=0;i<get_amount();i++)
			promedio+=get_objet(i);
		return  promedio;
}

 int array::max() {

  	 int  maximo;
	 int aux;
	 maximo=get_objet(0);
	 for(int i=0;i<get_amount();i++){
		if(get_objet(i)>maximo){
			maximo=get_objet(i);
			aux=i;
		}
	}
latex_all("Maximo");
latex_highlight(aux,height,vector[aux],"red");
end();


	return maximo;
 }

 int array:: min() {

  	 int  minimo;
	 int aux;
	 minimo=get_objet(0);
	 for(int i=0;i<get_amount()-1;i++){

		if(get_objet(i)<minimo){
			minimo=get_objet(i);
			aux=i;
		}
	}
latex_all("Minimo");
latex_highlight(aux,height,vector[aux],"green");
end();

	return minimo;
 }

 bool array:: search_element(int elemento){
   
   //encuentra el primer elemento lineal

  for(int i=0;i<get_amount()-1;i++)

	  if(get_objet(i)==elemento){

latex_all("Busca Elemento");
latex_highlight(i,height,vector[i],"green");
end();	


	return true;

		}
  return false;
 }


void array:: order(){

	int  posMinimo;

	for(int i=0;i<get_amount();i++){

		posMinimo=i;

		for(int j=i;j<get_amount();j++){

			if(get_objet(j)<get_objet(posMinimo)){

				posMinimo=j;
			}
		}

		exchange_elements(i,posMinimo);
	}
		

latex_all("Ordenar Vector");
end();

}

void array::clean_vector(){

		for(int i=0;i< size;i++){
		vector[i]=9999;
   }

amount=0;
latex_all("Limpia Vector");
end();


}

string array::getCadena(){

	cout<<"Los datos del array son: "<<endl;
	
	return this->cadena;

}

void array::latex(int posx, int posy, int valor){


		this->cadena += "\n \\node (rectangle) at (";
		this->cadena += to_string(posx);
		this->cadena += ",";
		this->cadena += to_string(posy);
		this->cadena += ") [draw,thick,minimum width=2cm,minimum height=5mm] {";
		this->cadena += to_string(valor); 
		this->cadena += "};";

end();
}

void array::latex_all(string nombre){

begin(nombre);

	for(int i=0; i<size; i++){

		this->cadena += "\n \\node (rectangle) at (";
		this->cadena += to_string(2*i);
		this->cadena += ",";
		this->cadena += to_string(height);
		this->cadena += ") [draw,thick,minimum width=2cm,minimum height=5mm] {";
		this->cadena += to_string(vector[i]); 
		this->cadena += "};";

	}

}

void array::latex_amount(string nombre){
	begin(nombre);
	for(int i=0; i<amount; i++){
		this->cadena += "\n \\node (rectangle) at (";
		this->cadena += to_string(2*i);
		this->cadena += ",";
		this->cadena += to_string(height);
		this->cadena += ") [draw,thick,minimum width=2cm,minimum height=5mm] {";
		this->cadena += to_string(vector[i]); 
		this->cadena += "};";
	}
}

void array::latex_highlight(int posx, int posy, int valor, string color){


		this->cadena += "\n \\node (rectangle) at (";
		this->cadena += to_string(2*posx);
		this->cadena += ",";
		this->cadena += to_string(posy);
		this->cadena += ") [draw,thick,fill=";
		this->cadena += color;
		this->cadena += ",minimum width=2cm,minimum height=5mm] {";
		this->cadena += to_string(valor); 
		this->cadena += "};";
}
string array::to_string(int valor){
stringstream s1;
s1<<valor;
return s1.str();

}

void array::begin (string nombre){

this->cadena += "\n \\begin{frame}\n";
this->cadena +="\\frametitle{";
this->cadena +=nombre;
this->cadena +="}\n";
this->cadena+="\n \\begin{tikzpicture} \n";

}

void array::end(){

this->cadena+="\n\n \\end{tikzpicture} \n";
this->cadena += " \\end{frame} \n";

}


