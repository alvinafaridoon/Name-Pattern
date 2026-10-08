#include<iostream>
#include<conio.h>
#include<windows.h>
//void gotoxy(int ,int);
using namespace std;
void gotoxy(int x, int y) 
{ 
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}
		
int main()
{
  int i,j;
  
   //A STARTS//
  for(i=2,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=2,j=2; i<=8; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=8,j=2; j<=8; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=2,j=5; i<=8; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
  //L STARTS//
  for(i=10,j=8; j>=2; j--)
  {
    Sleep(20);
    system("color 04");
    gotoxy(i,j);
    cout<<"*";
  }
  for(int i=10,j=8; i<=16; i++)
  {
    Sleep(20);
    system("color 04");
    gotoxy(i,j);
    cout<<"*";
  }
  
  //V STARTS//
  for(i=17,j=2; i<=19,j<=8; i++,j++)
  {
    Sleep(20);
    system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  for(int i=23,j=8; i<=28,j>=2; i++,j--)
  {
    Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  
  //I STARTS//
  for(i=31,j=2; i<=37; i++)
  {
    Sleep(20);
	system("color 04");
	gotoxy(i,j);
    cout<<"*";
  }
  for(i=34,j=2; j<=8; j++)
  {
	Sleep(20);  	
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  for(i=31,j=8; i<=37; i++)
  {
    Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  
  //N STARTS//
   for(i=39,j=8; j>=2; j--)
   {
	Sleep(20);
    system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
   for(i=39,j=2; i<=45,j<=8; i++,j++)
   {
	Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  for(i=45,j=7; j>=2; j--)
  {
	Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  
   //A STARTS//
  for(i=47,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=47,j=2; i<=53; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=53,j=2; j<=8; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=47,j=5; i<=53; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
   
   
   
   
    //F STARTS//
  for(i=60,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=60,j=2; i<=67; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=60,j=5; i<=67; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
    //A STARTS//
  for(i=69,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=69,j=2; i<=75; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=75,j=2; j<=8; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=69,j=5; i<=75; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
    //R STARTS//
  for(i=78,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=78,j=2; i<=85; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=85,j=2; j<=5; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=85,j=5; i>=78; i--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }  
  for(int i=83,j=6; i<=85; i++,j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
    //I STARTS//
  for(int i=88,j=2; i<=94; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=91,j=2; j<=8; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=88,j=8; i<=94; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
    //D STARTS//
  for(int i=97,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=97,j=2; i<=103; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=103,j=2; j<=8; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=103,j=8; i>=97; i--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
    //O STARTS//
  for(int i=106,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=106,j=2; i<=112; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=112,j=2; j<=8; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=112,j=8; i>=106; i--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
    //O STARTS//
  for(int i=115,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=115,j=2; i<=121; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=121,j=2; j<=8; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=121,j=8; i>=115; i--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
    //N STARTS//
  for(int i=124,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=124,j=2; i<=130,j<=8; i++,j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=130,j=2; j<=8; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }

  
  
  
getch();
 }

