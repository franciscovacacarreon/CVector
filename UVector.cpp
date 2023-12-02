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

bool CVector::esPrimo(int numero){
   bool resultado = true;
	if (numero <= 1) {
		resultado = false;
	}
	for (int i = 2; i <= sqrt(numero)  &&  resultado == true; i++) {
		if (numero % i == 0) {
			resultado = false;
			break;
		}
	}
	return resultado;
}

void CVector::eliminar(int pos) {
	if (pos >= 0  &&  pos < dimension) {
		for (int i = pos; i < dimension - 1; i++){
			vector[i] =  vector[i + 1];
		}
		dimension = dimension - 1;
	} else {
		ShowMessage("Longitud de posici�n no v�lida.");
	}
}

void CVector::eliminarPrimos() {
	for (int i = 0; i < dimension; i++) {
		if (esPrimo(vector[i]) == true) {
			eliminar(i);
			i--;
		}
	}
}

void CVector::eliminarMultiplos(int num) {
	for (int i = 0; i < dimension; i++) {
		if (vector[i] % num == 0) {
			eliminar(i);
			i--;
		}
	}
}

int CVector::sumarPosicionImpar() {
	int sum = 0;
	for (int i = 0; i < dimension; i++) {
		if (i % 2 != 0) {
			sum = sum + vector[i];
		}
	}
	return sum;
}

void CVector::voltearVector() {
	int j = dimension - 1;
	for (int i = 0; i < dimension / 2; i++) {
		intercambiar(i, j);
		j--;
	}
}

int CVector::devolverMayor(){
	int mayor = 0;
	for (int i = 0; i < dimension; i++) {
		if (vector[i] > mayor) {
			mayor = vector[i];
		}
	}
	return mayor;
}

void CVector::paresDerecha() {
	CVector *vectorPar = new CVector();
	CVector *vectorImpar = new CVector();
	int contadorPar = 0;
	int contadorImpar = 0;

	//Pares
	for (int j = 0; j < dimension; j++) {
		if (vector[j] % 2 == 0) {
			contadorPar++;
			vectorPar->setDimension(contadorPar);
			vectorPar->setElemento(contadorPar - 1, vector[j]);
		}
	 }

	 //Impares
	 for (int i = 0; i < dimension; i++) {
		if (vector[i] % 2 != 0) {
			contadorImpar++;
			vectorImpar->setDimension(contadorImpar);
			vectorImpar->setElemento(contadorImpar - 1, vector[i]);
		}
	 }

	 int h = 0;
	 for (h = 0; h < vectorPar->dimension; h++) {
		vector[h] = vectorPar->getElemento(h);
	 }

	 int m = h;
	 for (int k = 0; k < vectorImpar->dimension; k++) {
		vector[m] = vectorImpar->getElemento(k);
		m++;
	 }
}



