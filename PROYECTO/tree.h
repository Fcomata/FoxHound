#include "tree_node.h"
#include "latex.h"
#include <string>
#include <sstream>
#include <algorithm>
#include <fstream>
<<<<<<< HEAD
class tree: public latex{
=======

class tree: public Latex{
>>>>>>> bf17ea10b7128a3218da3c237d318c854712ce35

    public:

        tree();
        ~tree();

	void insert_root(int key);
        void insert1(int key);
        void insert2(int key);
        node *search(int key);
        void finish_tree();
        

    private:

        void destroy_tree(node *leaf);
        void insert(int key, node *leaf);
        node *search(int key, node *leaf);
        string convertir(int);

        node *root;
};
