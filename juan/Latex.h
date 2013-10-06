#include<string>

using namespace std;

class Latex
{

protected:
	string cadena,cadena_temp;
public:
	virtual string getCadena();
	Latex(void);
	~Latex(void);
};
