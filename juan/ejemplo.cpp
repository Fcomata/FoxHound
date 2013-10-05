#include "tree.h"

int main(){

	tree *a = new tree();

	a->insert_root(3);
	a->insert(2);
	a->insert(1);
	a->finish_tree();

	return 0;
}
