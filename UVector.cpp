//---------------------------------------------------------------------------

#pragma hdrstop

#include "UVector.h"
#include "VCL.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

CVector::CVector(){
	dimension = 0;
}

int CVector::getDimension(){
	 return dimension;
}

void CVector::setDimension(int valor){
	if (valor < LONGMAX  && valor > 0) {
		dimension = valor;
	} else {
		ShowMessage("Longitud de valor no v�lida.");
	}
}

int CVector::getElemento(int pos){
	int resultado = -999999;
	if (pos >= 0  &&  pos < dimension) {
		resultado = vector[pos];
	}
	return resultado;
}

void CVector::setElemento(int pos, int elemento){
	if (pos >= 0  &&  pos < dimension) {
		vector[pos] = elemento;
	} else {
		ShowMessage("Longitud de posici�n no v�lida.");
	}
}

int CVector::devolverElementoRepetido() {
	short mayor = 0;
	short contador = 0;
	int elemento = 0;
	for(int i = 0; i < dimension; i++) {
		contador = 0;
		for (int j = 0; j < dimension; j++) {
			if (vector[i] == vector[j]) {
				contador++;
			}
		}
		if (contador > mayor) {
			mayor = contador;
			elemento = vector[i];
		}
	}
	return elemento;
}

void CVector::intercalarImparesPares() {
	for (int i = 0; i < dimension; i++) {
		if (i % 2 == 0  &&  vector[i] % 2 == 0) {
			for (int j = i + 1; j < dimension; j++) {
				if (vector[j] % 2 != 0) {
					intercambiar(i, j);
					break;
				}
			}
		} else {
			if (i % 2 != 0  &&  vector[i] % 2 != 0) {
				for (int j = i +1; j < dimension; j++) {
					if (vector[j] % 2 == 0) {
						intercambiar(i, j);
						break;
					}
				}
			}
		}
	}
}

void CVector::intercambiar(int pos1, int pos2){
	int aux = vector[pos1];
	vector[pos1] = vector[pos2];
	vector[pos2] = aux;
}



