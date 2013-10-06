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

	void insert_root(int key);
	void destroy_tree();
        void insert_child(int key);
        node *search(int key);
        void finish_tree();
        

    private:

        void destroy_tree(node *leaf);
        void insert(int key, node *leaf);
        node *search(int key, node *leaf);
        string convertir(int);

        node *root;
};
