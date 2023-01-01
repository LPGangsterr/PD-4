#include <iostream>
using namespace std;
main()
{
	float redRose;
	float whiteRose;
	float Tulips;
	float redRosePrice;
	float whiteRosePrice;
	float tulipPrice;
	float Discount;
	float originalAmount;
	float priceAfterDiscount;
	cout  <<  "Enter number of Red Roses: ";
	cin  >>  redRose;
	cout  <<  "Enter number of White Roses:";
	cin  >>  whiteRose;
	cout  <<  "Enter number of Tulips: ";
	cin  >>  Tulips;
	redRosePrice=redRose*2;
	whiteRosePrice=whiteRose*4.10;
	tulipPrice=Tulips*2.50;
	originalAmount=redRosePrice+whiteRosePrice+tulipPrice;
if(originalAmount  >  200)
{
	Discount=originalAmount*20/100;
	priceAfterDiscount=originalAmount-Discount;
	cout  <<  "Original Price: "  <<  originalAmount  <<  endl;
	cout  <<  "Price after discount: "  <<  priceAfterDiscount  <<  endl;
}
if(originalAmount  <  200)
{
	cout  <<  "Original price: "  <<  originalAmount  <<  endl;
}
}