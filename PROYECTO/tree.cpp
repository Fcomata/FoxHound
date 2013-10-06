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
	
	int count = 0;
	this->cadena = "";
	if(root!=NULL)
		insert(key, root);
	else{
		root=new node;
		root->key_value=key;
		root->left=NULL;
		root->right=NULL;
	}
	this->cadena += "child {node [circle,draw,thick] {";
	this->cadena += convertir(key);
	this->cadena += "}}";
	cout << cadena << endl;
	
}

void tree::insert_root(int key){
	this->cadena = "";
	this->cadena += "\\node [circle,draw,thick] {";
	this->cadena += convertir(key);
	this->cadena += "}";
	cout << cadena << endl;
}

void tree::finish_tree(){
	cout << "; \n";
}

node *tree::search(int key){
	return search(key, root);
}

void tree::destroy_tree(){
	destroy_tree(root);
}

string tree::convertir(int valor){

	stringstream s1;
	s1 << valor;
	return s1.str();

}