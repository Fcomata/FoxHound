#include "Latex.h"

class Arreglo: public Latex
{
private: 
	int *vector;
	int tamano;
	int cantidad;
	int altura;
	void Latex(int,int,int);
	void LatexTodo(string);
	void LatexCantidad(string);
	void LatexResaltar(int,int,int,string);
	void begin(string);
	void end();
	string Convertir(int);
public:
	int eliminaElemento();
	void eliminaElementoEnPosicion(int);
	void ingresarElemento(int);
	void ingresarElementoEnPosicion(int,int);
	int sumaVector();
	//void invierteVector();
	void imprimeVector();
	int getCantidad();
	void limpiaVector();
	int obtenerObjeto(int);
	void intercambiarElementos(int,int);
	Arreglo(int n =10);
	int frecuencia(int);
	int calculaModa(); 
	void llenarVector(int);
	int calculaPromedio();
	int Max();
	int min();
	bool buscarElemento(int);
	void ordenar();
	virtual ~Arreglo(void);
	string getCadena();
};
