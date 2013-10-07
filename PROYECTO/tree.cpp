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
void tree::insert_root(int key){
	this->cadena_temp += "\n \\begin{frame} \n\n \\begin{tikzpicture}[level distance=2cm, level 1/.style={sibling distance=7cm}, level 2/.style={sibling distance=3.5cm}, level 3/.style={sibling distance=2cm}] \n";
	this->cadena_temp += "\\node [circle,draw,thick] {";
	this->cadena_temp += convertir(key);
	this->cadena_temp += "}; \n \\end{tikzpicture} \n\n \\end{frame} \n\n \\newpage";
	this->cadena += this->cadena_temp;
	int found = this->cadena_temp.find(";");
	this->cadena_temp.erase(this->cadena_temp.begin()+found,this->cadena_temp.end());	
}
void tree::insert_child(int key, node* leaf){
	if(root!=NULL)
		insert(key, leaf);
	else{
		root=new node;
		root->key_value=key;
		root->left=NULL;
		root->right=NULL;
	}	
	if(root->left!=NULL)
		insert(key, leaf);
	else{
		root->left=new node;
		root->left->key_value=key;
		root->left->left=NULL;
		root->left->right=NULL;
	}
	if(root->right!=NULL)
		insert(key, leaf);
	else{
		root->right=new node;
		root->right->key_value=key;
		root->right->left=NULL;
		root->right->right=NULL;
	}
	this->cadena_temp += "\n child {node [circle,draw,thick] {";
	this->cadena_temp += convertir(key);
	this->cadena_temp += "}";
	this->cadena_temp += "\n child {node [circle,draw,thick] {NULL}}";
	this->cadena_temp += "\n child {node [circle,draw,thick] {NULL}";
	this->cadena_temp += "}}; \n \\end{tikzpicture} \\end{frame} \n\n \\newpage";
	this->cadena += this->cadena_temp;
	int found = this->cadena_temp.find(";");
	this->cadena_temp.erase(this->cadena_temp.begin()+found,this->cadena_temp.end());	
}
void tree::finish_tree(){
this->cadena+="};";
ofstream myfile;
string route;
route+="./Latex/Arbol.tex";
myfile.open (route.c_str());
myfile << "\\documentclass{beamer} \n \\usetheme[pageofpages=of, alternativetitlepage=true]{Torino} \n \\usecolortheme{nouvelle} \n \\usepackage[spanish]{babel} \n \\usepackage{thumbpdf} \n \\usepackage{tikz} \n \\usetikzlibrary{arrows} \n \\usepackage{ucs} \n \\usepackage[utf8]{inputenc} \n \\usepackage{pgf,pgfarrows,pgfnodes,pgfautomata,pgfheaps,pgfshade} \n \\usepackage{verbatim} \n \\usepackage{booktabs} \n \\usepackage{multicol} \n \\usepackage{url} \n \\beamersetuncovermixins{\\opaqueness<1>{25}}{\\opaqueness<2->{15}} \n \\usetikzlibrary{trees} \n \\begin{document}\n";
myfile << this->cadena;
myfile << "\n\\end{document}";
myfile.close();

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
node* tree::return_root(){
return root;
}
