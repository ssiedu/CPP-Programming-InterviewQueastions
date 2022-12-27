#include<iostream>
using namespace std;
template <typename T>
T Addition(T num1 , T num2)
{
	T result;
	result=num1+num2;
	return result;
}

int main()
{
	int result1;
	double result2;
	result1=Addition<int>(10,20);
	cout<<"\n Addition of two integer value : "<<result1;
	result2=Addition<double>(22.3,12.5);
	cout<<"\n Addition of two double value : "<<result2;
	return 0;
}
