#include<iostream>
#include<math.h>
using namespace std;
class Cube
{
	int number,result;
	public:
		void getdata();
		void calculate();
		void display();
};
void Cube :: getdata()
{
	cout<<"\n Enter any number : ";
	cin>>number;
}
void Cube :: calculate()
{
//	result=number*number*number;
	result=pow(number,3);
}
void Cube :: display()
{
	cout<<"\n Cube of "<<number<<" is : "<<result;
}
int main()
{
	Cube C;
	C.getdata();
	C.calculate();
	C.display();
	return 0;
}
