

class Nodo{
private:
	int valor;
	Nodo *siguiente;
public:
	Nodo(int v,Nodo*);
	~Nodo();
	void setV (int );
	int getV ();
	void setS(Nodo *) ;
	Nodo * getS ();
};
