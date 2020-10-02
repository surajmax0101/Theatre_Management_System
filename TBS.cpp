
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
 }



//---------------------------------------------------------------------------

 int TBS :: main_menu2(void)
 {

	  
 }


//--------------------------------------------------------------------------

 int TBS :: main_menu3(void)
 {

 }
//---------------------------------------------------------------------------
 void TBS :: rating()
 {

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
	

 }