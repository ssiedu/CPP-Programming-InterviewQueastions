#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	int add,sub,mul,mod;
	float div;
	cout<<"\n Enter first value :- ";
	cin>>num1;
	cout<<"\n Enter Second value :- ";
	cin>>num2;
	
	add = num1+num2;
	sub = num1-num2;
	mul = num1*num2;
	mod = num1%num2;
	div = (float)num1/num2;
	
	cout<<"\n addition of two numbers       : "<<add;
	cout<<"\n subtraction of two numbers    : "<<sub;
	cout<<"\n Multiplication of two numbers : "<<mul;
	cout<<"\n Modulus of two numbers        : "<<mod;
	cout<<"\n Division of two numbers       : "<<div;
	
	return 0;
	
}
