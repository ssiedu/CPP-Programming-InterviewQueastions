#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number,firstDigit,lastDigit,count,a,b,swapNum;
	
	cout<<"\n Please Enter Any Number to find first and Last digit : ";
	cin>>number;
	
	count = log10(number);
	firstDigit = number/pow(10,count);
	lastDigit = number%10;
	
	a=firstDigit * (pow(10,count));
	b= number%a;
	number = b/10;
	
	swapNum= lastDigit * (pow(10,count)) + (number*10+firstDigit);
	
	cout<<"\n The first digit of a Given Number : "<<firstDigit;
	cout<<"\n The Last digit of a Given Number  : "<<lastDigit;
	cout<<"\n After swapping First and Last Digit : "<<swapNum;
	return 0;
}
