#include <iostream>
#include <windows.h>
using namespace std;
void alphabetA();
void alphabetW();
void alphabetI();
void alphabetS();
void myName();
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);	
}
main()
{
	system("cls");
	alphabetA();
	alphabetW();
	alphabetA();
	alphabetI();
	alphabetS();
}
void alphabetA()
{
	cout  <<  "    #"  <<  endl;
	cout  <<  "  #   #"  <<  endl;
	cout  <<  " #     #"  <<  endl;
	cout  <<  " #######"  <<  endl;
	cout  <<  " #     #"  <<  endl;
	cout  <<  " #     #"  <<  endl  <<  endl;
}
void alphabetW()
{
	cout  <<  "#       #"  <<  endl;
	cout  <<  "#       #"  <<  endl;
	cout  <<  "#   #   #"  <<  endl;
	cout  <<  "#  # #  #"  <<  endl;
	cout  <<  "# #   # #"  <<  endl;
	cout  <<  "#       #"  <<  endl  <<  endl;
}
void alphabetI()
{
	cout  <<  "#########"  <<  endl;
	cout  <<  "    #"  <<  endl;
	cout  <<  "    #"  <<  endl;
	cout  <<  "    #"  <<  endl;
	cout  <<  "    #"  <<  endl;
	cout  <<  "#########"  <<  endl  <<  endl;
}
void alphabetS()
{
	cout  <<  "  ######"  <<  endl;
	cout  <<  " #      #"  <<  endl;
	cout  <<  "   #"  <<  endl;
	cout  <<  "     #"  <<  endl;
	cout  <<  " #      #"  <<  endl;
	cout  <<  "  ###### "  <<  endl  <<  endl;
}