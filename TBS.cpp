
/*
	==========================================================================

	Name of the project   :- Theatre Management System
	===========================================================================

*/

#include <iostream.h>      // for cin , cout , function
#include <conio.h>         // for clrscr(), getch() function
#include <process.h>       // for exit function
#include <stdio.h>         // for gets() , puts() ,cprintf() function
#include <fstream.h>       // for open(),close(),write(),read(),
#include <dos.h>           // for delay() function
#include <string.h>        // For strcpy() function
									//Inclusion of header files
#define b2 textbackground(BLACK)

//=========================================================================//

struct Movie
{                          // Structure to store information about a movie
	char  name[80];
	char  audience[3];
	char  producer[90];
	char  genre[40];
	char  language[20];
	char  description[400];
	float rating;
	int   code;
};

struct MInfo
{                         // Structure to store information about timing
  int movcode;
  char mname[80];
  int time;
}m1[4];

struct Trans
{                    // Structure to store info regarding transaction history
  int  transID;
  int  mcode;
  int  ticketno;
  char cname[20];
  int  mprice;
}t;
//=========================================================================//

class TBS
{                                            //class open

  public : int pos;
														// All functions with prototype
			  void intro_screen(void);       // introduction screen
			  void bar(void);                // prints a bar containing name of cinema
			  void menumaker(char[][20],int);// menu maker
			  void welmenu();                // welcome menu
			  int  main_menu1(void);         // user type menu
			  int  main_menu2(void);         // user menu
			  int  main_menu3(void);         // admin menu
			  void rating(void);             // feedback from user
			  int  hormenu(int);             // horizontal menu for seat selection
			  void book_my_show(void);       // books ticket
			  void view_show(void);          // displays all the shows of the day
			  void about_us(void);           // displays info about cinema
			  void new_filmrecord(void);     // creates a new film record
			  void search_filmrecord(void);  // searches for a film record
			  void show_filmrecord(void);    // displays all film records
			  void delete_filmrecord();      // deletes a specified film record
			  void set_show(void);           // sets shows for the day
			  void trans_history(void);      // transaction history
			  void sd(int);                  // search and displays records

			  TBS()
			  {
				  pos = 0;
			  }
};                                           //class close

//=========================================================================//

void TBS :: intro_screen(void)
{                                            // intro_screen() open
	
    int p = 0 , i = 0; char ch1;              // Function variables

	introscreen_01:                           // Label for goto

		_setcursortype(_NOCURSOR);             // Hiding cursor
		ch1 = ' '; cout<< "\n\n\n\n\n";

		textcolor(DARKGRAY);
		cout<< "\n\t";       cprintf("%c",(char)201); 		//Line 1
		for( p = 0 ; p< 63 ; p++)   cprintf("%c",(char)223);
									cprintf("%c",(char)187);

		cout<< "\n\t";       cprintf("%c",(char)186);      //Line 2
		textcolor(YELLOW);
		cprintf("                  THEATRE MANAGEMENT SYSTEM                    ");
		textcolor(DARKGRAY);
									cprintf("%c",(char)186);

		cout<< "\n\t";       cprintf("%c",(char)186);      //Line 3
		textcolor(YELLOW);
		cprintf("                                                               ");
		textcolor(DARKGRAY);
									cprintf("%c",(char)186);

		cout<< "\n\t";       cprintf("%c",(char)199);      // Line 4
		for(p = 0; p < 63 ; p++)   cprintf("%c",(char)196);
		cprintf("%c", (char)182);

		cout<< "\n\t";       cprintf("%c",(char)186);      //Line 5
		textcolor(GREEN);
		cprintf("                       ALLTIME CINEMAS                         ");
		textcolor(DARKGRAY);
		cprintf("%c",(char)186);

		cout<< "\n\t";       cprintf("%c",(char)186); textbackground(CYAN);  //Line 6
		for(p = 0; p < 63 ; p++)   cout<<(char)32;
		b2;						cprintf("%c",(char)186);

		cout<< "\n\t";       cprintf("%c",(char)186);      //Line 7
		textcolor(RED + BLINK);
		cprintf("           Experience the richest quality ever...              ");
		textcolor(DARKGRAY); cprintf("%c",(char)186);

		cout<< "\n\t";       cprintf("%c",(char)186);      //Line 8
		for(p = 0; p < 63 ; p++)
									cprintf("%c",(char)32);
									cprintf("%c",(char)186);

		cout<< "\n\t";       cprintf("%c",(char)200);      // Line 10
		for(p = 0; p < 63 ; p++)
									cprintf("%c",(char)223);
									cprintf("%c",(char)188);

		cout<< "\n\n\n\n\n\n\n\t";                         //Line 11
		for(p = 0; p < 66 ; p++)   cprintf("%c",(char)196);
		cout<< "\n\t";             cprintf("%c",(char)186);
		cprintf("       Enter = Continue          %c",(char)186);
		cprintf("       Esc = Exit             %c",(char)186);

		 ch1 = getch();                       // Entering choice

		 switch(ch1)
		 {
			 case (char)13 :  break;           // Case of Enter key

			 case (char)27 : exit(0);          // Case of Esc key
									break;

			  default      : clrscr();
									goto introscreen_01;
		 }

}                                           //introscreen() close

//=========================================================================//
void TBS :: welmenu()
{
	
}
void TBS :: bar(void)                       // bar() open
{
	 
}                                           // bar() close

//===========================================================================

void TBS :: menumaker(char a[][20],int z )
{
	
}

//---------------------------------------------------------------------------
 int TBS :: main_menu1(void)
 {
     char option[3][20] = {
									"User",
									"Administrator",
									"Exit"
								  };
	  int i, flag = 0, rep = 0;

	  menumaker(option,3);


		clrscr();

					  switch(pos)
					  {
						 case 1 :
						 label01:  clrscr();char pk[8];
									  cout<< "\n\n\n\n\n\n\n\t\t";
									  textcolor(YELLOW + BLINK);
									  cprintf("Maximum 3 attempts allowed ");
									  textcolor(CYAN);
									  cout<< "\n\t\t";
									  cprintf("Enter PIN : ");
									  for(i=0;i<8;i++)  {
																 pk[i] = getch();
																 textcolor(RED);
																 cprintf("*");
															  }

									  if(pk[0] == 'p')  flag++;
									  if(pk[1] == 'a')  flag++;
									  if(pk[2] == 's')  flag++;
									  if(pk[3] == 's')  flag++;
									  if(pk[4] == 'w')  flag++;
									  if(pk[5] == 'o')  flag++;
									  if(pk[6] == 'r')  flag++;
									  if(pk[7] == 'd')  flag++;

										 if(flag == 8)
										 {
											cout<< "\n\n\t\t";
											textcolor(GREEN); cprintf("Access Granted");
											delay(1000);
											main_menu3();
										 }
										 else
										 {
											cout<< "\n\n\t\t";
											pk[0]=pk[1]=pk[2]=pk[3]=pk[4]=pk[5]=pk[6]=pk[7]= ' ';
											textcolor(RED); cprintf("Access Denied");
											delay(1000);
											rep++;
											if(rep == 3) exit(0);      //safety feature
											goto label01;
										 }

										break;

								  case 0 : welmenu();
											  main_menu2();

		 case 2 :  rating();

						break;

	 }

	  return pos;


 }



//---------------------------------------------------------------------------

 int TBS :: main_menu2(void)
 {
     char option[4][20] = { "Book My Show",
									 "View Shows",
									 "About Us",
									 "Exit"
								 };

	  pos = 0;
	 usermenu_01:
		 menumaker(option,4);
	 usermenu_02: clrscr();
					  const int pos1 = pos;
					  switch(pos1)
					  {

						 case 0 : clrscr();

									 bar();
									 book_my_show();
									  break;

						 case 1 : clrscr();
									 bar();
									 view_show();
									  break;

						 case 2 : clrscr();
									 bar();
									 about_us();
									  break;

						 case 3:  main_menu1();
									  break;

					  }

	  char x;
	  if(pos1 != 3)
	  {
	  cout<< "\n\n\n\n\n\n\n\n\t To goto to user menu press 'Esc'";
	  x = getch();

	  if(x == (char)27) goto usermenu_01;
	  }

	  return pos;

	  
 }


//--------------------------------------------------------------------------

 int TBS :: main_menu3(void)
 {
     char option[7][20] = { "New    Film Record",
									"Search Film Record",
									"View   Film Record",
									"Delete Film Record",
									"Set  Shows",
									"Transaction History ",
									"Exit"
								 };


	 adminmenu_01: clrscr();
						menumaker(option,7);
					  switch(pos)
					  {

						 case 0 : clrscr();
									 bar();
									 new_filmrecord();
									  break;

						 case 1 : clrscr();
									 bar();
									 search_filmrecord();
									  break;

						 case 2 : clrscr();
									 bar();
									 show_filmrecord();
									  break;

						 case 3:  clrscr();
									 bar();
									 delete_filmrecord();
									  break;

						 case 4:  clrscr();
									 bar();
									 set_show();
									 break;

						 case 5 : clrscr();
									 bar();
									 trans_history();
									 break;

						 case 6:	 main_menu1();
									  break;

					  }
	  char x;
	  cout<< "\n\n\n\n\n\n\n\n\t To goto to admin menu press 'Esc'";
	  x = getch()	  ;

	  if(x == (char)27) goto adminmenu_01;
	return pos;

 }
//---------------------------------------------------------------------------
 void TBS :: rating()
 {
     rerate:

	 system( "cls");

	  int si, s1=0, s2=0, s3=0, s4=0, s5=0;

	  cout<< "\n\t";
	  cprintf("Please rate(1-5)so that we may improve your experience next time ");
	  cout<<"\n\t";
		cin>> si;

		 switch(si)
		 {
			 case 1 :  s1++;
						 cout<< "\n\t\t"<<(char)2<<"  "<<(char)1<<"  "<<(char)1<<"  "<<(char)1<<"  "<<(char)1;
						 break;

			 case 2 :  s2++;
						 cout<< "\n\t\t"<<(char)2<<"  "<<(char)2<<"  "<<(char)1<<"  "<<(char)1<<"  "<<(char)1;
						 break;

			 case 3 : s3++;
						  cout<< "\n\t\t"<<(char)2<<"  "<<(char)2<<"  "<<(char)2<<"  "<<(char)1<<"  "<<(char)1;
						 break;

			 case 4 :  s4++;
						  cout<< "\n\t\t"<<(char)2<<"  "<<(char)2<<"  "<<(char)2<<"  "<<(char)2<<"  "<<(char)1;
						 break;

			 case 5 : s5++;
						  cout<< "\n\t\t"<<(char)2<<"  "<<(char)2<<"  "<<(char)2<<"  "<<(char)2<<"  "<<(char)2;
						 break;

			 default: goto rerate;

		}

		cout<< "\n\n\n\n";
		cout<< "\n\t 1 - Stars : "<<s1;
		cout<< "\n\t 2 - Stars : "<<s2;
		cout<< "\n\t 3 - Stars : "<<s3;
		cout<< "\n\t 4 - Stars : "<<s4;
		cout<< "\n\t 5 - Stars : "<<s5;
				  delay(1000);
	  exit(0);

 }
//---------------------------------------------------------------------------
int TBS :: hormenu(int p)
{


}
//---------------------------------------------------------------------------
void TBS :: book_my_show()
{   

}

//---------------------------------------------------------------------------

void TBS :: view_show()
{

	
}

//---------------------------------------------------------------------------

void TBS :: about_us()
{
	
}

//---------------------------------------------------------------------------

void TBS :: new_filmrecord()
{
	
}

//---------------------------------------------------------------------------

void TBS :: show_filmrecord()
{
	
}

//---------------------------------------------------------------------------
void TBS :: search_filmrecord()
{
	

}

//---------------------------------------------------------------------------

void TBS :: delete_filmrecord()
{
	

}

//---------------------------------------------------------------------------
void TBS :: set_show()
{
	
}

//-----------------------------------------------------
void TBS :: trans_history()
{
	
}

//---------------------------------------------------------------------------

 void main()
 {
	system( "cls" );

	 char re_TBS;

	TBS obj;

	 maincheckp_01:

	obj.intro_screen();
	obj.bar();

	if(obj.main_menu1() == 1 )  obj.main_menu3();
	if(obj.main_menu1() == 0 )  obj.main_menu2();

	 maincheckp_02:

	 cout<<"\n\t Wish to restart the program (Y/N) ?\t";
	  cin>>re_TBS;


		if(re_TBS == 'Y' || re_TBS == 'y')
		{
			clrscr();	 goto maincheckp_01;
		}

		if(re_TBS == 'N' || re_TBS == 'n'&& obj.main_menu1()== 0) obj.rating();

		else
		{
			clrscr();
			cout<< "\n\t The input you gave was INCORRECT . Please enter again";
			delay(200);
			goto maincheckp_02;

		}


	getch();

 }