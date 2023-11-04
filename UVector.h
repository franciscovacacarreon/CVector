//---------------------------------------------------------------------------

#ifndef UVectorH
#define UVectorH
//---------------------------------------------------------------------------

const int LONGMAX = 200;
class CVector{
	private:
		int dimension; //tama�o actual
		int vector[LONGMAX];
	public:
		CVector();
		int getDimension(); //obtiene la dimensi�n actual
		void setDimension(int valor); //modifica la dimensi�n actual
		int getElemento(int posicion); //retorna un elemento del vector
		void setElemento(int posicion, int elemento); //modifica un elemento del vector
};

#endif
