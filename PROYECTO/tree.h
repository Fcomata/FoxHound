#include "node.h"
#include "Latex.h"
#include <string>
#include <sstream>
#include <algorithm>
#include <fstream>
class tree: public Latex{

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
