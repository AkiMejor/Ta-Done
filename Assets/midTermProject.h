//---------------------------------------------------------------------------

#ifndef midTermProjectH
#define midTermProjectH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Colors.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
//---------------------------------------------------------------------------
class TTaDone : public TForm
{
__published:	// IDE-managed Components
	TRectangle *loginInterface;
	TRectangle *loginBlock;
	TLabel *title;
	TLabel *Login;
	TRoundRect *username;
	TRoundRect *password;
	TEdit *userEdit;
	TEdit *passEdit;
	TRoundRect *continueBox;
	TLabel *createAccountQuestion;
	TLabel *policyNotice;
	TImage *Image1;
	TButton *Button1;
	TRectangle *mainMenu;
	TPopup *LoginErrorPopUp;
	TRectangle *Rectangle2;
	TLabel *Label1;
	TLabel *Label2;
	TButton *CloseButton;
	TPanel *SideBar;
	TPanel *SidePanel;
	TStyleBook *StyleBook1;
	TPanel *MainPanel;
	TLabel *DashBoard;
	TRectangle *SearchBox;
	TRectangle *todayView;
	TImage *homeViolet;
	TImage *starViolet;
	TImage *helpIcon;
	TImage *userIcon;
	TLabel *usernameDisplay;
	TLabel *todayToDo;
	TImage *Image2;
	TEdit *AddTaskEdit;
	TCornerButton *CornerButton1;
	TPopup *LoginIncorrectPopUp;
	TRectangle *Rectangle;
	TLabel *Label4;
	TLabel *Label5;
	TButton *CloseButton1;
	TRectangle *createAccntInterface;
	TButton *createAccountButton;
	TRectangle *createAccntBlock;
	TImage *Image3;
	TLabel *Label3;
	TLabel *CreateAnAccount;
	TRectangle *UsernameCA;
	TRectangle *PasswordCAA;
	TEdit *PassCAAEdit;
	TButton *ContinueCAButton;
	TRectangle *ContinueCA;
	TCheckBox *TandSCheckBox;
	TLabel *LoginQuestion;
	TButton *Button2;
	TRectangle *AccntCreatedPopUp;
	TLabel *Label8;
	TLabel *Label9;
	TButton *Button3;
	TPanel *LogoCA;
	TRectangle *PassIncorrectPopUp;
	TLabel *Label10;
	TLabel *Label11;
	TButton *Button4;
	TRectangle *PassConCAB;
	TEdit *PassConCABEdit;
	TButton *userClick;
	TRectangle *UserClickPopUp;
	TButton *LogoutButton;
	TPanel *TodayStatus;
	TImage *SleepingCat;
	TLabel *StatusQuote;
	TRectangle *TandSUncheckedError;
	TLabel *Label7;
	TLabel *Label12;
	TButton *Button5;
	TEdit *UserCAEdit;
	TRectangle *Tasklist;
	TListBox *TaskListBox;
	TImage *AngwyCat;
	TImage *DazzleCat;
	TImage *homeWhite;
	TImage *starWhite;
	TPanel *homeIcon;
	TPanel *starIcon;
	TPanel *MainDashboard;
	TPanel *Completed;
	TLabel *HallOfFame;
	TRectangle *CompletedPanel;
	TListBox *completedTaskList;
	TLabel *Label6;
	TButton *homeButton;
	TButton *starButton;
	void __fastcall Task(TObject *Sender);
	void __fastcall CloseButtonClick(TObject *Sender);
	void __fastcall LoginFunction(int val);
	void __fastcall createAccountButtonClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall ContinueCAButtonClick(TObject *Sender);
	void __fastcall userClickClick(TObject *Sender);
	void __fastcall LogoutButtonClick(TObject *Sender);
	void __fastcall CornerButton1Click(TObject *Sender);
	void __fastcall TaskListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item);
	void __fastcall starButtonClick(TObject *Sender);
	void __fastcall homeButtonClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TTaDone(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTaDone *TaDone;
//---------------------------------------------------------------------------
#endif
