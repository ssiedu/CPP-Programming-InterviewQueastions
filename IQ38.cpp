#include<iostream>
using namespace std;
class First
{
	protected:
		int num1,num2;
	public:
		void getdata(int x, int y)
		{
			num1=x;
			num2=y;
		}
};
class Second : public First
{
	protected:
		int sum;
	public:
		void get_sum()
		{
			sum=num1+num2;
		}
};
class Third
{
	protected:
		int fnum,snum,mul;
		public:
			void getnum(int x,int y)
			{
				fnum=x;
				snum=y;
			}
			void get_mul()
			{
				mul=fnum*snum;
			}
};
class Fourth : public Second , public Third
{
	public:
		void display()
		{
			cout<<" \n Total : "<<num1<<" + "<<num2<< " = "<<sum;
			cout<<" \n Mul   : "<<fnum<<" * "<<snum<< " = "<<mul;
		}
};
int main()
{
	Fourth f;
	int a,b;
	cout<<"\n Enter First Number : ";
	cin>>a;
	cout<<"\n Enter Second Number : ";
	cin>>b;
	f.getdata(a,b);
	f.get_sum();
	f.getnum(a,b);
	f.get_mul();
	f.display();
	return 0;
}
