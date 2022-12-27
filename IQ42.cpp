#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void print()
		{
			cout<<"\n This is a print function in base class";
		}
		void show()
		{
			cout<<"\n This is a show function in base class ";
		}
};
class Derive : public Base
{
	public:
		void print()
		{
			cout<<"\n This is a print function in derive class";
		}
		void show()
		{
			cout<<"\n This is a show function in derive class";
		}
};
int main()
{
	Base *ptr;
	Derive d;
	ptr=&d;
	ptr->print();
	ptr->show();
	return 0;
}
