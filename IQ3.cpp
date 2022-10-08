#include<iostream>
using namespace std;
int main()
{
	int years,weeks,days;
	
	cout<<"\n Enter days :- ";
	cin>>days;
	
	years = days /365;
	weeks = (days%365)/7;
	days = days - ((years*365) +(weeks*7));
	
	cout<<" Number of years : "<<years<<endl;
	cout<<" Number of weeks : "<<weeks<<endl;
	cout<<" Number of days  : "<<days<<endl;
	
	return 0;
	
}
