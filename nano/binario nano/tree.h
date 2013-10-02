#include "node.h"
#include "Latex.h"

class tree: public Latex{


    public:

        tree();
        ~tree();

        void insert(int key);
        node *search(int key);
        void destroy_tree();

    private:
        void destroy_tree(node *leaf);
        void insert(int key, node *leaf);
        node *search(int key, node *leaf);
	void end();
	void begin();
	void cerrar();
	void create();
	void LatexNode(string, int);
	void LatexChild(string, valor);
	string Convertir(int);

        node *root;
};
