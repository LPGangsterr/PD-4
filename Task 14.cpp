#include <iostream>
using namespace std;
void printMenu();
void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks);
void compareMarks(string nameStudent1,float ecatMarksStudent1,string nameStudent2,float ecatMarksStudent2);
main()
{
	string name;
	float matricMarks;
	float interMarks;
	float ecatMarks;
	string nameStudent1;
	string nameStudent2;
	float ecatMarksStudent1;
	float ecatMarksStudent2;
	printMenu();
	calculateAggregate(name, matricMarks, interMarks, ecatMarks);
	compareMarks(nameStudent1,ecatMarksStudent1,nameStudent2,ecatMarksStudent2);
}
void printMenu()
{
	cout  <<  "#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*"  <<  endl;
	cout  <<  "*                                  #"  <<  endl;
	cout  <<  "#      UNIVERSITY   ADMISSION      *"  <<  endl;
	cout  <<  "*                                  #"  <<  endl;
	cout  <<  "#        MANAGEMENT  SYSTEM        *"  <<  endl;
	cout  <<  "*                                  #"  <<  endl;
	cout  <<  "#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*"  <<  endl;
}
void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks)
{
	cout  <<  "Enter your name: ";
	cin >> name;
	cout  <<  "Enter your matriculation marks: ";
	cin >> matricMarks;
	cout  <<  "Enter your intermediate marks: ";
	cin >> interMarks;
	cout  <<  "Enter your ECAT marks: ";
	cin >> ecatMarks;
	matricMarks = matricMarks/1100 *100;
	interMarks = interMarks/550 *100;
	ecatMarks = ecatMarks/400 * 100;
	float Aggregate =(matricMarks * 30/100)+(interMarks * 30/100)+(ecatMarks * 40/100);
	cout  <<  "Your current aggregate is "  <<  Aggregate  <<  "."  <<  endl;
}
void compareMarks(string nameStudent1,float ecatMarksStudent1,string nameStudent2,float ecatMarksStudent2)
{
	cout  <<  "Enter Student's ECAT marks: ";
	cin  >>  ecatMarksStudent1;
	cout  <<  "Enter Student2's ECAT marks: ";
	cin  >>  ecatMarksStudent2;
if(ecatMarksStudent1  >  ecatMarksStudent2)	
{
	cout  <<  "Your roll no is 41.";
}
if(ecatMarksStudent1  <  ecatMarksStudent1)
{
	cout  <<  "Your roll no is 42.";
}
}