#include<iostream>
using namespace std;
template<class T>
class Calculator
{
	T First_Number,Second_Number;
	public:
		Calculator( T n1, T n2)
		{
			First_Number=n1;
			Second_Number=n2;
		}
		void display()
		{
			cout<<"Numbers : "<<First_Number<<" and "<<Second_Number<<endl;
			cout<<First_Number<<"+"<<Second_Number<<"="<<add()<<endl;
			cout<<First_Number<<"-"<<Second_Number<<"="<<sub()<<endl;
			cout<<First_Number<<"*"<<Second_Number<<"="<<mul()<<endl;
			cout<<First_Number<<"/"<<Second_Number<<"="<<div()<<endl;
		}
		T add()
		{
			return First_Number+Second_Number;
		}
		T sub()
		{
			return First_Number-Second_Number;
		}
		T mul()
		{
			return First_Number * Second_Number;
		}
		T div()
		{
			return First_Number / Second_Number;
		}
};
int main()
{
	Calculator<int> i(20,10);
	Calculator<float> f(2.4,1.2);
	cout<<" Integer value result : "<<endl;
	i.display();
	cout<<" Float value Result : "<<endl;
	f.display();
	return 0;
}

