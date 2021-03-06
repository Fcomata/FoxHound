#include <iostream>
#include "array.h"
#include "list.h"
#include "to_tex.h"

using namespace std;

int main(){

	cout<<"Testing structure: list"<<endl;
	list * l = new list();
	l->insert_at_end(1);
	l->insert_at_end(2);
	l->insert_at_end(3);
    	l->insert_at_end(4);
	l->insert_at_end(5);
	l->insert_at_beginning(6);
	l->insert_in_position(7, 2);
	l->insert_in_position(8, 2);
	l->delete_first_node();
	l->delete_last_node();
	l->delete_in_position(3);
	l->search(8);	
	l->search(44);
	string cadena = l->getCadena();
	create_tex("test.tex",cadena);

cout<<"////////////////////////////////////////////////////////////////////"<<endl;

	cout<<"Testing structure: array"<<endl;
    	array * a= new array(5);
    	a->insert_element(5);
    	a->insert_element(4);
    	a->insert_element(3);
    	a->insert_element(2);
    	a->insert_element(1);
	a->search_element(3);
	a->delete_element_in_pos(2);
	a->insert_element_in_pos(4,14);
	a->search_element(14);
	a->order();
	a->clean_vector();

    cout<<"El suma es: " << a->sum_vector()<<endl;
    cout<<a->getCadena();
    create_tex("array.tex",a->getCadena());
    cin.get();
    return 0;
}


