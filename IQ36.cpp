#include<iostream>
using namespace std;
class First
{
	protected:
		int First_Number;
	public:
		void get_Firstnumber()
		{
			cout<<"\n Enter First Number : ";
			cin>>First_Number;
		}
};
class Second : public First
{
	protected:
		int Second_Number;
	public:
		void get_Secondnumber()
		{
			cout<<"\n Enter Second Number : ";
			cin>>Second_Number;
		}
};
class Third : public Second
{
	int Third_Number,result;
	public:
		void get_Thirdnumber()
		{
			cout<<"\n Enter Third Number : ";
			cin>>Third_Number;
		}
		void get_product()
		{
			result=First_Number*Second_Number*Third_Number;
			cout<<"\n Product of Three Numbers : "<<result;
		}
};

int main()
{
	Third obj;
	obj.get_Firstnumber();
	obj.get_Secondnumber();
	obj.get_Thirdnumber();
	obj.get_product();
	return 0;
}

