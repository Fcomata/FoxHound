#include "Latex.h"
#include "list_node.h"
class list:public Latex{
public:
	list();
	~list();
	bool search(int v);
	void insert_at_beginning(int v);
	void insert_at_end(int v);
	void insert_in_position(int v, int pos);
	void delete_first_node();
	void delete_last_node();
	void delete_in_position(int pos);
	void next_node();
	void go_to_first_node();
	void go_to_last_node();
	bool get_current_node();
	int current_value();
	string getCadena();
	void begin_tex();
	void end_tex();
	string to_string(int v);
private:
	list_node* first_node;
	list_node* current_node;
	int size;
	void show();
};
