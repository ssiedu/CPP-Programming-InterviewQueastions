#include<iostream>
#include<math.h>
using namespace std;

int convertBinaryToDecimal(long int n);

int main()
{
	long int n;
	cout<<"\n Enter a binary Number : ";
	cin>>n;
	
	cout<<n <<" in binary = "<<convertBinaryToDecimal(n)<<" in decimal";
	return 0;
}

int convertBinaryToDecimal(long int n)
{
	int decimalNumber =0,i=0,rem;
	while(n!=0)
	{
		rem = n%10;
		n=n/10;
		decimalNumber += rem*pow(2,i);
		++i;
	}
	
	return decimalNumber;
}
