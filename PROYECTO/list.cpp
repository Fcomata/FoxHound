#include "list.h"
#include <iostream>
#include <sstream>

using namespace std;
   list::list(){
	first_node=current_node=NULL;
	size=0; 	
    }
   list::~list(){
	go_to_last_node();
		while(first_node){
			go_to_last_node();
			first_node=first_node->get_next();
			delete current_node;
	    	}
	current_node=NULL;
	first_node=NULL;
 }
void list::insert_at_end(int v){	
	go_to_last_node();
	first_node=new list_node(v,first_node);
	size++;
	show("Inserta al final");
}
void list::insert_at_beginning(int v){
	go_to_first_node();
	list_node* new_last=new list_node(v, NULL);
	current_node->set_next(new_last);
	size++;
	show("Inserta al inicio");
}
void list::insert_in_position(int v,int pos){
	go_to_last_node();
	for (int i=pos-1; i>0;i--)
	{
		current_node=current_node->get_next();
	}
	list_node* new_node= new list_node(v,(current_node->get_next()));
	current_node->set_next(new_node);
	size++;
	show("Inserta en Posicion");
}
void list::delete_last_node(){
	go_to_last_node();
	first_node = current_node->get_next();
	delete current_node;
	size--;
	show("Elimina el ultimo nodo");
}
void list::delete_first_node(){
	go_to_last_node();
	for (int i =size-1; i>0; i--)
	{
		current_node=current_node->get_next();
	}
	delete current_node;
	size--;
	show("Elimina el primer nodo");
}
void list::delete_in_position(int pos){
	go_to_last_node();
	for (int i=pos-1; i>0;i--)
	{
		current_node=current_node->get_next();
	}
	list_node* temp; 
	temp=current_node->get_next();
	current_node->set_next((current_node->get_next())->get_next());
	delete temp;
	size--;
	show("Elimina el nodo de posicion");
}
bool list::search(int v){
	list_node* anterior=NULL;
	go_to_last_node();
	while(current_node!=NULL){
		if(current_node->get_value()==v){
				cout<<"This value is in the list: "<<endl;
				cout<<v<<endl;
				return true;
		}
		current_node=current_node->get_next();
	}
	cout<<"This value is NOT in the list: "<<endl;
	cout<<v<<endl;
	return false;
 }
void list::show(string nombre){
	go_to_last_node();
	begin_tex(nombre);
	cout<<"The list contains: "<<endl;
	for(int i=1; i<=size;i++){
		int v=current_node->get_value();
		cout<<v<<endl;
		current_node=current_node->get_next();
		//Now it will write the tex code
		cadena+="\\node[main_node] (";
		cadena+=to_string(i);
		cadena+=")";
		if(i>1){
		cadena+="[right of=";
		cadena+=to_string(i-1);
		cadena+="]";}
		cadena+=" {";
		cadena+=to_string(v);
		cadena+="}; \n";	
		}
	//Null node, in first position
	this->cadena+="\\node[main_node] (null) [right of=";
	this->cadena+=to_string(size);
	this->cadena+="] {Null};\n\n";
	this->cadena+="\\path[every node/.style={font=\\sffamily\\small}]\n";
	//arrows are drawn, less null arrow
	for(int i=1; i<size;i++){
		this->cadena+="(";
		this->cadena+=to_string(i);
		this->cadena+=") edge [left] node [left] {} (";
		this->cadena+=to_string(i+1);
		this->cadena+=")\n";
		}
	//Null arrow
	this->cadena+="(";
	this->cadena+=to_string(size);
	this->cadena+=") edge [left] node [left] {} (";
	this->cadena+="null";
	this->cadena+=");\n";
	end_tex();
	cout<<endl;
}
void list::next_node(){
	if(current_node)
	current_node=current_node->get_next();
}
void list::go_to_last_node(){
	current_node=first_node;
}
void list::go_to_first_node(){
	go_to_last_node();
	if(first_node!=NULL)
	while(current_node->get_next())next_node();
}
bool list::get_current_node(){
	return current_node!=NULL;
}
int list::current_value(){
	return current_node->get_value();
}
string list::getCadena(){
	cout<<"Values ​​in the list are: "<<endl;
	return this->cadena;
}
void list::begin_tex(string nombre){
	this->cadena += "\n \\begin{frame}";
	this->cadena +="\\frametitle{";
	this->cadena +=nombre;
	this->cadena +="}\n";
	this->cadena+="\n \\begin{tikzpicture}[shorten >=1pt,->]";
	this->cadena+="\n \\tikzstyle{main_node}=[rectangle,fill=black!25,minimum size=20pt,inner sep=0pt] \n";
	}
void list::end_tex(){
	this->cadena+="\n\n \\end{tikzpicture} \n";
	this->cadena += " \\end{frame} \n";
	}
string list::to_string(int value){
	stringstream value_string;
	value_string<<value;
	return value_string.str();
	}
