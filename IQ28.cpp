#include<iostream>
using namespace std;
class Second;
class First
{
	int number1;
	public:
		void setdata(int a)
		{
			number1=a;
		}
		void display()
		{
			cout<<"First Number : "<<number1<<endl;
		}
		friend void exchange(First & , Second &);
};
class Second
{
	int number2;
	public:
		void setdata(int b)
		{
			number2 = b;
		}
		void display()
		{
			cout<<" Second Number : "<<number2<<endl;
		}
		friend void exchange(First & , Second &);
		
};

void exchange(First &x , Second &y)
{
	int temp  = x.number1;
	x.number1 = y.number2;
	y.number2 = temp;
}
int main()
{
	First f;
	Second s;
	f.setdata(100);
	s.setdata(200);
	cout<<"\n value before Exchange : \n";
	f.display();
	s.display();
	exchange(f,s);//function call 
	cout<<"\n value After exchange : \n";
	f.display();
	s.display();
	return 0;
}





