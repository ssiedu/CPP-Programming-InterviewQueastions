#include<iostream>
using namespace std;
// function definition
void swapValue (int *a , int *b)// formal arguments
{
	int temp; // Third variable
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int number1 , number2 ; // actual argument
	
	cout<<"\n Enter First Number : ";
	cin>>number1;
	
	cout<<"\n Enter Second Number : ";
	cin>>number2;
	
	/*passing Address */
	
	swapValue(&number1 , &number2);
	
	cout<<"\n After Swapping : \n";
	cout<<"\n First Number : "<<number1;
	cout<<"\n Second Number : "<<number2;
	
	return 0;
	
	
}
