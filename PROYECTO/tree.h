#include "tree_node.h"
#include "latex.h"
#include <string>
#include <sstream>
#include <algorithm>
#include <fstream>


class tree: public latex{


    public:

        tree();
        ~tree();

	//void insert_root(int key);
	void destroy_tree();
        //void insert_child(int key, node* leaf);
        node *search(int key);
        void finish_tree();
	node* devolver();
	void preTree(node*);
	void insert(int key, node *leaf);
        


    private:

        void destroy_tree(node *leaf); 
        node *search(int key, node *leaf);
        string convertir(int);
	int contador;
	int contador2;
	int variable;
        node *root;
};
