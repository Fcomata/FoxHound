#include "tree.h"

int main(){

	tree *a = new tree();

	a->create_tree();
	a->insert_root(3);
	a->insert(1);
	a->insert(4);
	a->insert(7);
	a->finish_tree();

	return 0;
}
