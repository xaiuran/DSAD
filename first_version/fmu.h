//---------------------------------------------------------------------------

#ifndef fmuH
#define fmuH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.TabControl.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
#include <FMX.ListView.Adapters.Base.hpp>
#include <FMX.ListView.Appearances.hpp>
#include <FMX.ListView.hpp>
#include <FMX.ListView.Types.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <FMX.Memo.hpp>
#include <FMX.ScrollBox.hpp>
//---------------------------------------------------------------------------
class Tfm : public TForm
{
__published:	// IDE-managed Components
	TTabControl *tabControl;
	TTabItem *tabCabinetChild;
	TImage *Image1;
	TLayout *Layout1;
	TLabel *labelName;
	TLabel *labelNameParent;
	TLabel *labelNameChild;
	TLabel *labelNameParentDefault;
	TLayout *Layout2;
	TLayout *Layout3;
	TLayout *Layout4;
	TLayout *Layout5;
	TButton *buttonChildGoMain;
	TTabItem *tabMain;
	TTabItem *tabCabinetChildSend;
	TTabItem *tabCabinetChildLook;
	TButton *buttonGoLook;
	TButton *buttonGoSendMessage;
	TLayout *Layout6;
	TLayout *Layout7;
	TButton *buttonGoCabinetChild;
	TButton *buttonSendMessage;
	TLabel *Label1;
	TLayout *Layout8;
	TLayout *Layout9;
	TButton *buttonLookGoBack;
	TLayout *Layout10;
	TEdit *loginMain;
	TEdit *passwordMain;
	TButton *buttonMain;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TMemo *Memo1;
	TLabel *Label2;
	TStyleBook *StyleBook1;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLayout *Layout11;
	TLayout *Layout12;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TLayout *Layout13;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TTabItem *tabCabinetTeacher;
	TLayout *Layout14;
	TLayout *Layout15;
	TLabel *Label16;
	TLabel *Label17;
	TImage *Image2;
	TLayout *Layout17;
	TButton *Button1;
	TButton *Button2;
	TLayout *Layout18;
	TButton *Button3;
	void __fastcall buttonMainClick(TObject *Sender);
	void __fastcall buttonChildGoMainClick(TObject *Sender);
	void __fastcall buttonGoLookClick(TObject *Sender);
	void __fastcall buttonGoSendMessageClick(TObject *Sender);
	void __fastcall buttonGoCabinetChildClick(TObject *Sender);
	void __fastcall buttonLookGoBackClick(TObject *Sender);
	void __fastcall buttonSendMessageClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tfm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfm *fm;
//---------------------------------------------------------------------------
#endif
