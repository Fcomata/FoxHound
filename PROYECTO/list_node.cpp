#include "list_node.h"
#include <iostream>
using namespace std;
list_node::list_node(int v, list_node *nxt=NULL){
	this->value= v;
	next=nxt;
}
list_node::~list_node(){
}
void list_node::set_value (int new_value) { 
	this->value= new_value;
}
void list_node::set_next (list_node *new_next) { 
	this->next=new_next;
}

int list_node::get_value (){ 
	return this->value;
}

list_node * list_node::get_next (){ 
	return this->next;
}
