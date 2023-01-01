#include <iostream>
using namespace std;
main()
{
	int workingDays;
	int Holidays = 113;
	int freePlayTime;
	int Difference;
	workingDays = 365 - Holidays;
	freePlayTime = workingDays * 63 + Holidays * 127;
	Difference = freePlayTime - 30000;
if(Holidays  >  Difference)
{
	Difference = 30000 - freePlayTime;
	cout  <<  "Tom will run away "  <<  Difference  <<  " minutes for play.";
}
if(Holidays  <  Difference)
{
	Difference = freePlayTime - 30000;
	cout  <<  "Tom sleeps well "  <<  Difference  <<  " minutes less for play.";
}
}
