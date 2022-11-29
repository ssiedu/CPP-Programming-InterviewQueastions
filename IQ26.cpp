#include<iostream>
using namespace std;
class Time
{
	int hours;
	int minutes;
	public:
		void getTime(int h, int m)
		{
			hours = h;
			minutes=m;
		}
		void showTime(void)
		{
			cout<<hours<< " Hours and "<< minutes << " Minutes";
		}
		void sum(Time , Time); // object as an argumnet
};
void Time :: sum(Time T1,Time T2)
{
	minutes = T1.minutes + T2.minutes;
	hours   = minutes/60;
	minutes = minutes%60;
	hours = hours + T1.hours + T2.hours;
	
}
int main()
{
	Time T1,T2,T3;
	T1.getTime(2,45);
	T2.getTime(3,30);
	T3.sum(T1,T2);
	cout<<"\n T1 : ";
	T1.showTime();
	cout<<"\n T2 : ";
	T2.showTime();
	cout<<"\n T3 : ";
	T3.showTime();
	return 0;
	
}





