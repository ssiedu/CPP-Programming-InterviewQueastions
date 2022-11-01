#include<iostream>
using namespace std;
class Max
{
	int number1,number2;
	public:
		void getdata()
		{
			cout<<"\n Enter First Number : ";
			cin>>number1;
			cout<<"\n Enter Second Number : ";
			cin>>number2;
		}
		void display(); //function declaration
		int largest();  // function declaration
	
};
void Max :: display()
{
	cout<<"\n First Number is : "<<number1;
	cout<<"\n Second Number is : "<<number2;
	cout<<"\n Maximum value is : "<<largest()<<endl;
}

int Max :: largest()
{
	if(number1>number2)
		return number1;
	else
		return number2;
}

int main()
{
	Max m;
	m.getdata();
	m.display();
	return 0;
}
















