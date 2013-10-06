#include <string>
#pragma once
#ifndef LATEX
#define LATEX
#endif
using namespace std;
class latex
{
protected:
<<<<<<< HEAD
	string cadena,cadena_temp;
=======
	string cadena;
	string cadena_temp;
>>>>>>> bf17ea10b7128a3218da3c237d318c854712ce35
public:
	virtual string getCadena();
	latex(void);
	~latex(void);
};
