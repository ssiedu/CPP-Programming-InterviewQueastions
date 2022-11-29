#include<iostream>
using namespace std;
class Max_num
{
	int F_num , S_num;
	public:
		void getNumber(int f, int s)
		{
			F_num =f;
			S_num =s;
		}
		void display();
		void max();
};
void Max_num :: display()
{
	cout<<" First Number : "<<F_num<<endl;
	cout<<" Second Number : "<<S_num<<endl;
}
inline void Max_num :: max()
{
	cout<<"Largest Number : "<<((F_num>S_num) ? F_num : S_num);
}
int main()
{
	Max_num m;
	int num1,num2;
	cout<<"\n Enter First Number : ";
	cin>>num1;
	cout<<"\n Enter Second Number : ";
	cin>>num2;
	m.getNumber(num1,num2);
	m.display();
	m.max();
	return 0;
}








