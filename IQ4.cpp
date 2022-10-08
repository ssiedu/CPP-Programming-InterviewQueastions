#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<" Enter Year : -";
	cin>>year;
	
	(year%4==0 && year %100!=0) ? cout<<"Leap Year "<<year : (year %400 ==0) ? cout<<"Leap Year " : cout<<year<<"is not leap year";
	
	return 0;
}
