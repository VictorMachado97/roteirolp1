#include <string>
#include "Despesa.h"

using namespace std;

double Despesa::getValor(){
	return valor;
}

int Despesa::getTipoDeGasto(){
	return tipoDeGasto;
}

void Despesa::setValor(double valor){
	this->valor=valor;
}

void Despesa::setTipoDeGasto(int tipoDeGasto){
	this->tipoDeGasto=tipoDeGasto;
}
