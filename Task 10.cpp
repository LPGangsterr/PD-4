#include <iostream>
#include <windows.h>
using namespace std;
void Pakistan(int ticketPrice,string Name);
void Ireland(int ticketPrice,string Name);
void India(int ticketPrice,string Name);
void England(int ticketPrice,string Name);
void Canada(int ticketPrice,string Name);
main()
{
while(true)
{
	int ticketPrice;
	string Name;
	cout  <<  "Ticket price in Dollars: ";
	cin  >>  ticketPrice;
	cout  <<  "Enter your country's name: ";
	cin  >>  Name;
if(Name  ==  "Pakistan")
{
	Pakistan(ticketPrice,Name);
}
if(Name  ==  "Ireland")
{
	Ireland(ticketPrice,Name);
}
if(Name  ==  "India")
{
	India(ticketPrice,Name);
}
if(Name  ==  "England")
{
	England(ticketPrice,Name);
}
if(Name  ==  "Canada")
{
	Canada(ticketPrice,Name);
}
}
}
void Pakistan(int ticketPrice,string Name)
{
	int Discount=(ticketPrice*5)/100;
	int totalAmount=ticketPrice-Discount; 
	cout  <<  "Total discount is "  <<  totalAmount  <<  "."  <<  endl;
}
void Ireland(int ticketPrice,string Name)
{
	int Discount=(ticketPrice*10)/100;
	int totalAmount=ticketPrice-Discount; 
	cout  <<  "Total discount is "  <<  totalAmount  <<  "."  <<  endl;
}
void India(int ticketPrice,string Name)
{
	int Discount=(ticketPrice*20)/100;
	int totalAmount=ticketPrice-Discount; 
	cout  <<  "Total discount is "  <<  totalAmount  <<  "."  <<  endl;
}
void England(int ticketPrice,string Name)
{
	int Discount=(ticketPrice*30)/100;
	int totalAmount=ticketPrice-Discount; 
	cout  <<  "Total discount is "  <<  totalAmount  <<  "."  <<  endl;
}
void Canada(int ticketPrice,string Name)
{
	int Discount=(ticketPrice*45)/100;
	int totalAmount=ticketPrice-Discount; 
	cout  <<  "Total discount is "  <<  totalAmount  <<  "."  <<  endl;
}