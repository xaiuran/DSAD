//---------------------------------------------------------------------------


#pragma hdrstop

#include "dmu.h"
#include "fmu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "FMX.Controls.TControl"
#pragma resource "*.dfm"
Tdm *dm;
//---------------------------------------------------------------------------
__fastcall Tdm::Tdm(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------

 void Tdm::SendMessage(UnicodeString sNote, UnicodeString sIdParent, UnicodeString sIdTeacher, UnicodeString sNumber) {
	procSendMess->ParamByName("NOTE")->Value = sNote;
	procSendMess->ParamByName("ID_PARENT")->Value = sIdParent;
	procSendMess->ParamByName("ID_TEACHER")->Value = sIdTeacher;
	procSendMess->ParamByName("NUMBER")->Value = 8;
	procSendMess->ExecProc();
}
