class list_node{
private:
	int value;
	list_node *next;
public:
	list_node(int v,list_node*);
	~list_node();
	void set_value (int);
	int get_value ();
	void set_next(list_node *) ;
	list_node * get_next ();
};
