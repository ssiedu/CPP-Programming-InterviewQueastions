#include<iostream>
using namespace std;
class Factorial
{
	int var,fact;
	public:
		Factorial(int temp)//constructor
		{
			var =temp;
		}
		int factorial_calculate()
		{
			fact=1;
			for(int i=1;i<=var;i++)
			{
				fact =fact *i;
			}
			return fact;
		}
};

int main()
{
	int n;
	cout<<"\n Enter any number : ";
	cin>>n;
	Factorial obj(n);
	Factorial obj1 = obj;
	
	cout<<"\n"<<n<<" Factorial is : "<<obj.factorial_calculate();
	cout<<"\n"<<n<<" Factorial is : "<<obj1.factorial_calculate();
	
	return 0;
}








