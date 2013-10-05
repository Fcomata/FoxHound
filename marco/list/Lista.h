#include "Latex.h"
#include "Nodo.h"

class Lista:public Latex{

public:
	Lista();
	~Lista();
	bool buscar(int v);
	void insertar_al_inicio(int v);
	void insertar_al_final(int v);
	void insertar_en_medio(int v, int pos);
	void borrar_al_inicio();
	void borrar_al_final();
	void borrar_en_medio(int pos);
	void elSiguiente();
	void elPrimero();
	void elUltimo();
	bool elActual();
	int valorActual();
	string getCadena();
	void begin();
	void end();
	string Convertir(int v);
private:
	Nodo* primero;
	Nodo* actual;
	int cant;
	void mostrar();
};
