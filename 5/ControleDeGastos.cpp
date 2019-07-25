#include <iostream>
#include <string>
#include "Despesa.h"
#include "ControleDeGastos.h"

void ControleDeGastos::setDespesa(Despesa d, int pos){
	despesas[pos].valor=d.valor;
	despesas[pos].tipoDeGasto=d.tipoDeGasto;
}

double ControleDeGastos::calculaTotalDeDespesas(){
	int i;
	float total=0;	
	for(i=0;i<2;i++){
		total=total + despesas[i].valor;	
	}
	return total;
}

bool ControleDeGastos::existeDespesaDoTipo(int tipoD){
	int i;	
	for(i=0;i<100;i++){
		if (despesas[i].tipoDeGasto==tipoD){
			return true;
		}
	}
	return false;
}

double ControleDeGastos::getDespesasValor(){
	return despesas[0].valor;
}


