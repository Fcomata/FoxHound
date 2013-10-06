#include "Latex.h"
#include "list_node.h"
class list:public Latex{
public:
	list();///< Default constructor.
	~list();///< Destructor.
	bool search(int v);///< Confirms if the value "v" is in the list.
	void insert_at_beginning(int v);///< Inserts a new node with value "v" at beginning of the list.
	void insert_at_end(int v);///< Inserts a new node at end of the list.
	void insert_in_position(int v, int pos);///< Inserts a new node with value "v" in the position "pos" of the list.
	void delete_first_node();///< Deletes the first node of the list.
	void delete_last_node();///< Deletes the last node of the list.
	void delete_in_position(int pos);///< Deletes the node in the position "pos"of the list.
	void next_node();///< Set the current node in the next node of the list.
	void go_to_first_node();///< Set the current node in the first node of the list.
	void go_to_last_node();///< Set the current node in the last node of the list.
	bool get_current_node();///< Returns the current node, if this is not NULL.
	int current_value();///< Returns the value of the current node.
	string getCadena();
	void begin_tex(string);///< Writes the headers and required latex libraries and packages on the .tex file.
	void end_tex();///< Writes the footers on the .tex file.
	string to_string(int v);///< Convert an int "v" to string.
	int size;///< Size of the list.
private:
	list_node* first_node;///< First node in the list.
	list_node* current_node;///< Last node in the list, this points to NULL.
	void show(string);///< Show the list.
};
