#include "tree.h"

int main(){

	tree *a = new tree();

	a->create_tree();
	a->insert_root(3);
	a->insert1(1);
	a->insert1(4);
	a->finish_tree();

	return 0;
}
