#include<iostream>
using namespace std;
int isEven(int num)
{
	return !(num & 1);
}
int main()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	
	if(isEven(num))
	{
		cout<<"\n The entered number is even ";
	}
	else
	{
		cout<<"\n the entered number is odd ";
	}
	return 0;
}
