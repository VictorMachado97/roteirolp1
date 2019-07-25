#ifndef DESPESA_H
#define DESPESA_H
#include <string>

using namespace std;

class Despesa{
	public:
	double valor;
	int tipoDeGasto;

	double getValor();
	int getTipoDeGasto();
	void setValor(double valor);
	void setTipoDeGasto(int tipoDeGasto);

};


#endif
