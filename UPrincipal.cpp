//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UPrincipal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
CVector *vector1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	vector1 = new CVector();
}

void TForm1::cargarSGVector(TStringGrid *SG, CVector *vector) {
	for (int i = 0; i < vector->getDimension(); i++) {
		int elemento = StrToInt(SG->Cells[i][0]);
		vector->setElemento(i, elemento);
	}
}

void TForm1::mostrarSGVector(TStringGrid *SG, CVector *vector) {
	SG->ColCount = vector->getDimension();
	for (int i = 0; i < vector->getDimension();i++) {
		SG->Cells[i][0] = vector->getElemento(i);
	}
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int valor = StrToInt(EDimension->Text);
	vector1->setDimension(valor);
	SGVector->ColCount = vector1->getDimension();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	cargarSGVector(SGVector, vector1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	mostrarSGVector(SGVector, vector1);
}
//---------------------------------------------------------------------------

