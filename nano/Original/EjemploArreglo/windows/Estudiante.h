#pragma once
#include <iostream>
#include <string>
using namespace std;
class int
{
private:
	int codigo;
	string nombre;
	float promedio;
public:
	int();
	int(int, string, float);
	int getCodigo();
	void setCodigo(int);
	string getNombre();
	void setNombre(string);
	float getPromedio();
	void setPromedio(float);
	void mostrarint();
	~int(void);
};