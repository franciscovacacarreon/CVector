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





