#include "tree.h"
#include <iostream>
#include <sstream>
using namespace std;

int tamaño =25;

tree::tree(){

	root=NULL;
}

tree::~tree(){

	destroy_tree();
}

void tree::destroy_tree(node *leaf){

	if(leaf!=NULL){

		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

void tree::insert(int key, node *leaf){
	
	if(key< leaf->key_value){
		
		if(leaf->left!=NULL){

			insert(key, leaf->left);	

		}

		else{
			
			leaf->left=new node;
			leaf->left->key_value=key;
			leaf->left->left=NULL;
			leaf->left->right=NULL;
		}  
	}

	else if(key>=leaf->key_value){

		if(leaf->right!=NULL){

			insert(key, leaf->right);
		}

		else{
			leaf->right=new node;
			leaf->right->key_value=key;
			leaf->right->left=NULL;
			leaf->right->right=NULL;
		}
	}
}

node *tree::search(int key, node *leaf){

	if(leaf!=NULL){

		if(key==leaf->key_value){
		//highlight nodo RED
			return leaf;
		}

		else{
		//highliht nodo green

		}

		if(key<leaf->key_value){
			
			return search(key, leaf->left);

		}

		else{
			//highlight nodo RED
			return search(key, leaf->right);
		}

	}

	else{ 

	return NULL;
	
	}
}

void tree::insert(int key){

	if(root!=NULL){

		insert(key, root);
		

	}

	else{
		root=new node;
		root->key_value=key;
		root->left=NULL;
		root->right=NULL;
		
		
	}
}

node *tree::search(int key){

	return search(key, root);
}

void tree::destroy_tree(){

	destroy_tree(root);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tree::create (node *leaf){

	int contador = 0;

		LatexNode("white",root->key_value);

		if(NULL=!leaf->key_value){

			LatexChild("white",key_value);

		}
		


		if(NULL =! leaf->key_value){
			contador++;
			return search(key, leaf->left);

		}

		else{
		for(int i=0;i<contador, i++){
			cerrar();}
			return search(leaf->right);
		}

	


}

void tree::LatexNode (string color, int valor){

this->cadena+="\\node [";
this->cadena+=color;
this->cadena+="_node] {";
this->cadena+=Convertir(valor);
this->cadena+="}";


}

void tree::LatexChild (string color, int valor){

this->cadena+="child { node [";
this->cadena+=color;
this->cadena+="_node] {";
this->cadena+=Convertr(valor);
this->cadena+="}";

}


string tree::Convertir(int valor){

stringstream s1;
s1<<valor;
return s1.str();

}

void tree::begin (){

this->cadena += "\n \\begin{frame}";
this->cadena+="\n \\begin{tikzpicture} \n";

}

void tree::end(){

this->cadena+="\n\n \\end{tikzpicture} \n";
this->cadena += " \\end{frame} \n";

}


void tree::cerrar(){

this->cadena+="}";

}



