#include<string>

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
