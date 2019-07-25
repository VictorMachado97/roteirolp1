#include <iostream>
#include <string>
#include "ControleDeGastos.h"

using namespace std;

int main(){
	ControleDeGastos c1;

	c1.setDespesa({10.00,0},0);
	c1.setDespesa({15.00,1},1);
	
	cout << c1.getDespesasValor() << endl;
	cout << "O total de despesas do objeto c1 eh: " << c1.calculaTotalDeDespesas() << endl;





	return 0;
}
