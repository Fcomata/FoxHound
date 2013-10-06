#include "Latex.h"
class array: public Latex
{
private: 
	int *vector;
	int size;
	int amount;
	int height;
	void latex(int,int,int);
	void latex_all(string);
	void latex_amount(string);
	void latex_highlight(int,int,int,string);
	void begin(string);//
	void end();//
	string to_string(int);
public:
	int delete_element();
	void delete_element_in_pos(int);
	void insert_element(int);
	void insert_element_in_pos(int,int);
	void fill_vector(int);
	array(int n =10);
	int sum_vector();
	int max();
	int min();
	void invest_vector();
	void exchange_elements2(int,int);
	void print_vector();
	int get_amount();
	void clean_vector();
	int get_objet(int);
	void exchange_elements(int,int);
	int frequency(int);
	int mode(); 
	int arithmetic_mean();
	bool search_element(int);
	void order();
	virtual ~array(void);
	string getCadena();
};
