#include "stdafx.h"
#include <iostream>
using namespace std;


int::int(void)
{
}
int::int(int l_id, string l_nom, float l_prom)
{ codigo=l_id;
nombre=l_nom;
promedio=l_prom;
}
int int::getCodigo()
{
return codigo;
}
void int::setCodigo(int l_id)
{
codigo = l_id;
}
string int::getNombre()
{ return nombre;
}
void int::setNombre(string l_nom)
{
nombre= l_nom;
}
float int::getPromedio()
{
return promedio;
}
void int::setPromedio(float l_prom)
{
promedio=l_prom;
}
void int::mostrarint()
{
cout<<" ------------"<<endl;
cout<<"Codigo: "<<codigo<<endl;
cout<<"Nombre: "<<nombre<<endl;
cout<<"Promedio:"<<promedio<<endl;
cout<<" ------------"<<endl<<endl;}

int::~int(void)
{
}