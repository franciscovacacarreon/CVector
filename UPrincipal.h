//---------------------------------------------------------------------------

#ifndef UPrincipalH
#define UPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include "UVector.h"
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *EDimension;
	TLabel *Label1;
	TButton *Button1;
	TStringGrid *SGVector;
	TLabel *Label2;
	TButton *Button2;
	TButton *Button3;
	TMainMenu *MainMenu1;
	TMenuItem *Funciones1;
	TMenuItem *Procedimientos1;
	TMenuItem *Devolverelementorepetido1;
	TEdit *EResultado;
	TLabel *Label3;
	TMenuItem *intercalar1;
	TMenuItem *eliminarPrimos1;
	TEdit *ENumero;
	TLabel *Label4;
	TMenuItem *Eliminarmltiplos1;
	TMenuItem *sumaimpares1;
	TMenuItem *Voltearvector1;
	TMenuItem *DevolverMayor1;
	TMenuItem *Paresaladerecha1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Devolverelementorepetido1Click(TObject *Sender);
	void __fastcall intercalar1Click(TObject *Sender);
	void __fastcall eliminarPrimos1Click(TObject *Sender);
	void __fastcall Eliminarmltiplos1Click(TObject *Sender);
	void __fastcall sumaimpares1Click(TObject *Sender);
	void __fastcall Voltearvector1Click(TObject *Sender);
	void __fastcall DevolverMayor1Click(TObject *Sender);
	void __fastcall Paresaladerecha1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);

	void cargarSGVector(TStringGrid *SG, CVector *vector);
	void mostrarSGVector(TStringGrid *SG, CVector *vector);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
