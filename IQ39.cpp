#include<iostream>
using namespace std;
int product(int first, int second)
{
	return first*second;
}
int product(int first, int second, int third)
{
	return first*second*third;
}
double product(double first, double second)
{
	return first * second;
}

int main()
{
	cout<<"\n product of two integer value : "<<product(5,6);
	cout<<"\n product of three integer value : "<<product(2,3,4);
	cout<<"\n product of two double value : "<<product(2.1,2.3);
	return 0;
}
