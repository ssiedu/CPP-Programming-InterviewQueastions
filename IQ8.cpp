#include<iostream>
using namespace std;
int main()
{
	int num,product=1;
	
	cout<<"\n Enter any number : ";
	cin>>num;
	
	while(num != 0 )
	{
		product = product * (num % 10);
		
		num = num /10;
	}
	cout<<"\n product of digits : "<<product;
	return 0;
}
