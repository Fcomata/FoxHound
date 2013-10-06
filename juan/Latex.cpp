#include "Latex.h"

Latex::Latex(void)
{
	cadena="";
	cadena_temp="";
}

Latex::~Latex(void)
{
}

string  Latex::getCadena(){
	return this->cadena;

}
