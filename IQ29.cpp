#include<iostream>
using namespace std;
class Prime
{
	int num,flag,i;
	public:
		Prime(int x)// parametrized constructor 
		{
			num=x;
			flag=1;
			
			{
				for(i=2;i<=num/2;i++)
				   if(num%i==0)
				   {
				   	   flag=0;
				   	   break;
				   }
				   else
				   {
				   	   flag=1;
				   }
			}
		}
		void show()
		{
			if(flag==1)
				cout<<num<< " is prime number ";
			else
				cout<<num<< " is not prime number ";
		}
		
};

int main()
{
	int a;
	cout<<"\n Enter any number : ";
	cin>>a;
	Prime p(a);
	p.show();
	return 0;
}










