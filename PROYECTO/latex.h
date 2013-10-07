#include <string>
#pragma once
#ifndef LATEX
#define LATEX
#endif
using namespace std;

class latex {

protected:

	string cadena, cadena_temp;


public:
	virtual string getCadena();
	virtual string getCadenaTemp();
	latex(void);
	~latex(void);
};
