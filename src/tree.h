#include "tree_node.h"
#include "latex.h"
#include <string>
#include <sstream>
#include <algorithm>
#include <fstream>


class tree: public latex{
    public:
        tree();///< Default constructor.
        ~tree();///< Destructor.
	void insert_root(int key); ///< Inserts the root node of the tree, initially its leaves are pointing to NULL.
	void destroy_tree();///< Destroy each leaf if is not points to NULL.
        void insert_child(int key, node* leaf); ///< Inserts a leaf with value "key" in the node "leaf".
        node *search(int key); ///< Returns the node with the key_value "key".
        void finish_tree(); ///< Draws the tree on the .tex file.
	node* return_root(); ///< Returns the root of the tree.
    private:
        void destroy_tree(node *leaf);
        void insert(int key, node *leaf);
        node *search(int key, node *leaf);
        string convertir(int);
        node *root;
};
