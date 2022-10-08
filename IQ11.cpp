#include<iostream>
using namespace std;
int main()
{
	char mathoperator;
	double firstNumber, secondNumber;
	
	cout<<"\n Enter an operator (+,-,*,/) : ";
	cin>>mathoperator;
	
	cout<<"\n Enter fistr Number : ";
	cin>>firstNumber;
	cout<<"\n Enter second Number : ";
	cin>>secondNumber;
	
	switch(mathoperator)
	{
		case '+':
			cout<<firstNumber<< " + "<< secondNumber << " = "<<firstNumber + secondNumber;
			break;
			
		case '-':
			cout<<firstNumber<<" - "<<secondNumber << " = "<<firstNumber - secondNumber;
			break;
			
		case '*':
			cout<<firstNumber << " * "<<secondNumber << " = "<<firstNumber * secondNumber;
			break;
			
		case '/':
			cout<<firstNumber <<" / "<<secondNumber <<" = "<<firstNumber / secondNumber;
			break;
			
		default : 
			cout<<"Error ! Please Enter Correct Operator";
			
	}
	return 0;
}
