#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#include <string>

using namespace std;

class ControleDeGastos: private Despesa{
	private:
	Despesa despesas[100];
	
	public:
	double getDespesasValor();
	void setDespesa(Despesa d, int pos);
	double calculaTotalDeDespesas();
	bool existeDespesaDoTipo(int tipoD);


};

#endif
