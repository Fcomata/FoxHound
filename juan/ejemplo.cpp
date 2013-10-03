#include "tree.h"

int main(){

	tree *a = new tree();
	a->insert(2);
	a->insert(3);
	a->insert(1);
	a->insert(6);
	//a->destroy_tree();
	cout << a->search(1) << endl;
	cout << a->search(5) << endl;
	cout << a->search(6) << endl;
	
	return 0;
}
