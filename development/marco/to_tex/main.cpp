#include "to_tex.h"
#include <string>
using namespace std;
int main()
{
cout<<"Prueba de to_tex"<<endl;
string cadena="Hola Mundo!!!";
string name="Hello_Mundo.tex";
	create_tex(name, cadena);
cout<<"Fin"<<endl;
}

