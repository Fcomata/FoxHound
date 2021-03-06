#include "latex.h"
class array: public latex
{
private: 
	int *vector;///< Default constructor.
	int size;///< Size of vector.
	int amount;///< Current number of elements contained in the array.
	int height;///< Height of vector figure.
	void latex(int,int,int);
	void latex_all(string);
	void latex_amount(string);
	void latex_highlight(int,int,int,string);
	void begin(string);//
	void end();//
	string to_string(int);

public:
	int delete_element();///< Deletes the first element in the array.
	void delete_element_in_pos(int);///< Deletes the element in the position "pos" of the array.
	void insert_element(int);///< Inserts an element with value "elem" to the first position of the array.
	void insert_element_in_pos(int,int);///< Inserts an element with value "elem" to the position "pos" of the array.
	void fill_vector(int);///< Fills an empty array, assigns zero to each position.
	array(int n =10);///< Constructor initializes an array of size "n".
	int sum_vector();///< Returns the sum of all elements in the array.
	int max();///< Returns the element with the highest value in the array.
	int min();///< Returns the element with the lowest value in the array.
	void invert_vector();///< Reverses the positions of the elements ​​in the array.
	void exchange_elements2(int,int);///< Change the position of two elements.
	void print_vector();///< Displays the array values right through console.
	int get_amount();///< Returns current number of elements contained in the array.
	void clean_vector();///< Deletes all elements in the array.
	int get_objet(int);///< Returns the element in the position "n" in the array.
	void exchange_elements(int,int);///< Change the position of two elements. 
	int frequency(int);///< Calculate and return the frequency of element "elem".
	int mode(); ///< Calculate and return the mode of the array.
	int arithmetic_mean();///< Calculate and return the average of the values in the array.
	bool search_element(int);///< Confirms if exist the element "elem" in the array.
	void order();///< Orders the array from lowest to highest.
	virtual ~array(void); ///< Destructor, deletes the array.
	string getCadena();
};
