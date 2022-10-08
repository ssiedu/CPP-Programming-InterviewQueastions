#include<iostream>
#include<math.h>
using namespace std;

long int convertDecimalToBinary(int);

int main()
{
	int n,binaryNumber;
	
	cout<<"Enter a decimal Number : ";
	cin>>n;
	binaryNumber= convertDecimalToBinary(n);
	
	cout<< n << " In decimal = "<< binaryNumber << " in binary "<<endl;
	return 0;
}

long int convertDecimalToBinary(int n)
{
	long int binaryNumber=0;
	int remainder , i=1,step=1;
	
	while(n !=0)
	{
		remainder = n%2;
		cout<<" Step "<< step++ << ": " << n << "/2 , Remainder = "<< remainder << ", Quotient = "<< n/2 <<endl;
		n=n/2;
		binaryNumber += remainder*i;
		i*=10;
	}
	return binaryNumber;
	
	
}
