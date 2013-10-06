#include <string>
#pragma once
#ifndef LATEX
#define LATEX
#endif
using namespace std;
class latex
{
protected:
	string cadena;
	string cadena_temp;
public:
	virtual string getCadena();
	latex(void);
	~latex(void);
};
