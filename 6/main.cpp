#include <iostream>
#include <string.h>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

int main(){
	ControleDePagamentos pag;

	pag.setPagamentos({10.00,"Carlos"},0);
	pag.setPagamentos({15.00,"Mateus"},1);

	cout << pag.calculaTotalDePagamentos() << endl;

	







	return 0;
}
