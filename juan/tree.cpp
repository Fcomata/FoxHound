#include "tree.h"
#include <iostream>
using namespace std;

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
		if(leaf->right!=NULL)
			insert(key, leaf->right);
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
		if(key==leaf->key_value)
			return leaf;
			if(key<leaf->key_value)
			return search(key, leaf->left);
		else
			return search(key, leaf->right);
	}
	else return NULL;
}

void tree::insert(int key){
	
	if(root!=NULL)
		insert(key, root);
	else{
		root=new node;
		root->key_value=key;
		root->left=NULL;
		root->right=NULL;
	}
	
	this->cadena_temp += "\n child {node [circle,draw,thick] {";
	this->cadena_temp += convertir(key);
	this->cadena_temp += "}}; \n \\end{tikzpicture} \\end{frame} \n\n \\newpage";
	
	this->cadena += this->cadena_temp;
	
	int found = this->cadena_temp.find(";");
	this->cadena_temp.erase(this->cadena_temp.begin()+found,this->cadena_temp.end());
	
}

void tree::insert_root(int key){
	
	this->cadena_temp += "\n \\begin{frame} \n\n \\begin{tikzpicture}[level distance=2cm, level 1/.style={sibling distance=7cm}, level 2/.style={sibling distance=3.5cm}, level 3/.style={sibling distance=2cm}] \n";
	this->cadena_temp += "\\node [circle,draw,thick] {";
	this->cadena_temp += convertir(key);
	this->cadena_temp += "}; \n \\end{tikzpicture} \n\n \\end{frame} \n\n \\newpage";
	
	this->cadena += this->cadena_temp;
	int found = this->cadena_temp.find(";");
	this->cadena_temp.erase(this->cadena_temp.begin()+found,this->cadena_temp.end());
	
	//cout << cadena_temp << endl;
}

void tree::create_tree(){
	this->cadena += "\\documentclass{article} \n \\usepackage{tikz} \n \\usetikzlibrary{trees} \n \\begin{document} \n\n";
}

void tree::finish_tree(){
	this->cadena += "\n \\end{document} \n";
	cout << cadena << endl;
}

node *tree::search(int key){
	return search(key, root);
}

void tree::destroy_tree(){
	destroy_tree(root);
}

string tree::convertir(int entero){

	stringstream code;
	code << entero;
	return code.str();

}
