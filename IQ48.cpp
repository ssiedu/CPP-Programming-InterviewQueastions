#include<iostream>
using namespace std;
int main()
{
	int num1,num2,result;
	cout<<"\n Enter First Number : ";
	cin>>num1;
	cout<<"\n Enter Second Number : ";
	cin>>num2;
	try
	{
		if(num2==0)
		throw num2;
		else if(num2>num1)
		throw "Not allowed -denominator is greater than numerator";
		result=num1/num2;
		cout<<"\n Result is : "<<result;
	}
	catch(int ex1)
	{
		cout<<"\n You can not declare "<<ex1<<" as a denominator";
	}
	catch(char const *ex2)
	{
		cout<<ex2;
		
	}
	return 0;
}
