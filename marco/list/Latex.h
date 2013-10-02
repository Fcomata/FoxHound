#include <string>
#pragma once
#ifndef LATEX
#define LATEX
#endif

using namespace std;

class Latex
{

protected:
	string cadena;
public:
	virtual string getCadena();
	Latex(void);
	~Latex(void);
};
