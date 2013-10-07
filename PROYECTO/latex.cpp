#include "latex.h"
latex::latex(void)
{
	cadena="";
	cadena_temp="";
}
latex::~latex(void)
{
}
string  latex::getCadena(){
	return this->cadena;
}

string  latex::getCadenaTemp(){
	return this->cadena_temp;
}
