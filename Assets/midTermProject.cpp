//---------------------------------------------------------------------------

#include <fmx.h>
#include <cstring>
#pragma hdrstop

#include "midTermProject.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource("*.Windows.fmx", _PLAT_MSWINDOWS)

TTaDone* TaDone;

//---------------------------------------------------------------------------
__fastcall TTaDone::TTaDone(TComponent* Owner) : TForm(Owner) {}

void __fastcall TTaDone::Task(TObject* Sender)
{
	int val = 1;
	LoginFunction(val);
}
//---------------------------------------------------------------------------

void __fastcall TTaDone::CloseButtonClick(TObject* Sender)
{
	LoginErrorPopUp->Visible = false;
	LoginIncorrectPopUp->Visible = false;
	AccntCreatedPopUp->Visible = false;
	TandSUncheckedError->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TTaDone::createAccountButtonClick(TObject *Sender)
{
	  createAccntInterface->Visible= true;
	  loginInterface->Visible= false;
	  TandSUncheckedError->Visible = false;

	  UserCAEdit->Text= "";
	  PassCAAEdit->Text= "";
	  PassConCABEdit->Text= "";
	  TandSCheckBox->IsChecked = false;

}
//---------------------------------------------------------------------------

void __fastcall TTaDone::Button2Click(TObject *Sender)
{
	  loginInterface->Visible= true;
	  createAccntInterface->Visible= false;
}
//---------------------------------------------------------------------------

void __fastcall TTaDone::ContinueCAButtonClick(TObject *Sender)
{
	int val = 2;
	LoginFunction(val);
}

//---------------------------------------------------------------------------
void __fastcall TTaDone::LoginFunction(int val)
{
	String user[5][2] = {"GroupCPP","8888","0","0","0","0","0","0","0","0"};
	int i;

	String userCA = UserCAEdit->Text;
	String passCA = PassCAAEdit->Text;
	String confirmPassCA = PassConCABEdit->Text;

	bool TandSchecked = TandSCheckBox->IsChecked;

	if (passCA != confirmPassCA){
		PassCAAEdit->TextSettings->FontColor = claRed;
		PassConCABEdit->TextSettings->FontColor = claRed;
	}

	for (i = 0; i < 5; i++){
		if ((passCA == confirmPassCA) && (user[i][0] == "0")){
			if (TandSchecked == TRUE) {
				PassCAAEdit->TextSettings->FontColor = claBlack;
				PassConCABEdit->TextSettings->FontColor = claBlack;
				user[i][0] = userCA;
				user[i][1] = passCA;
				break;
			}
			else {
				TandSUncheckedError->Visible = true;
			}
		}
	}

	if (val == 2) {
		// int newUserIndex;
		if ((userCA == user[i][0]) && (passCA == user[i][1])) {
			AccntCreatedPopUp->Visible = true;
		}
	}

	else if (val == 1) {
		String userinput = userEdit->Text;
		String passinput = passEdit->Text;

		for (i = 0; i < 5; i++){
			if ((user[i][0] == userinput) && (user[i][1] == passinput)){
				mainMenu->Visible = true;
				usernameDisplay->Text = user[i][0];
				UserClickPopUp->Visible= false;

				userEdit->Text = "";
				passEdit->Text = "";

				break;
			}
			else if ((user[i][0] == userinput) || (user[i][1] == passinput)) {
				LoginIncorrectPopUp->Visible = true;
				break;
			}
		}
		if (i == 5){
			LoginErrorPopUp->Visible = true;
		}
	}
}
//---------------------------------------------------------------------------


void __fastcall TTaDone::userClickClick(TObject *Sender)
{
    UserClickPopUp->Visible= true;
}
//---------------------------------------------------------------------------

void __fastcall TTaDone::LogoutButtonClick(TObject *Sender)
{
	loginInterface->Visible= true;
	mainMenu->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TTaDone::CornerButton1Click(TObject *Sender)
{
	String TaskName = AddTaskEdit->Text;
	TaskListBox->Items->AddStrings(TaskName);
	AddTaskEdit->Text = "";

	DazzleCat->Visible = false;
	AngwyCat->Visible = true;


	StatusQuote->Text = "Better start moving, hooman!";
}
//---------------------------------------------------------------------------

void __fastcall TTaDone::TaskListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)
{
	int index = Item->Index;
	String completedTask = Item->Text;

	TaskListBox->Items->Delete(index);
	completedTaskList->Items->AddStrings(completedTask);

	AngwyCat->Visible = false;
	DazzleCat->Visible = true;
	StatusQuote->Text = "You finished a task, Great Job!";
}
//---------------------------------------------------------------------------

void __fastcall TTaDone::starButtonClick(TObject *Sender)
{
	MainDashboard->Visible= false;
	Completed->Visible= true;

	homeViolet->Visible= false;
	homeWhite->Visible= true;

	starWhite->Visible= false;
	starViolet->Visible= true;

}
//---------------------------------------------------------------------------

void __fastcall TTaDone::homeButtonClick(TObject *Sender)
{
	MainDashboard->Visible= true;
	Completed->Visible= false;

	homeViolet->Visible= true;
	homeWhite->Visible= false;

	starWhite->Visible= true;
	starViolet->Visible= false;
}
//---------------------------------------------------------------------------


