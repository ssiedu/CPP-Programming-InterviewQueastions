#include<iostream>
using namespace std;
class Complex
{
	float real;
	float imag;
	public:
		//constructor to initialize real and imag to 0
		Complex() : real(0),imag(0){}
		
		void input()
		{
			cout<<" Enter real and imaginary parts respectively : ";
			cin>>real;
			cin>>imag;
		}
		//overload the + operator 
		
		Complex operator +(const Complex &obj)
		{
			Complex temp;
			temp.real=real+obj.real;
			temp.imag=imag+obj.imag;
			return temp;
		}
		
		void output()
		{
			if(imag<0)
				cout<<"\n Output Complex Number : "<<real<<imag<<"i";
			else
				cout<<"\n Output Complex Number : "<<real<<"+"<<imag<<"i";
		}
};
int main()
{
	Complex complex1,complex2,result;
	cout<<"\n Enter First Complex Number : \n";
	complex1.input();
	cout<<"\n Enter Second Complex Number : \n";
	complex2.input();
	result=complex1+complex2;
	result.output();
	return 0;
}







