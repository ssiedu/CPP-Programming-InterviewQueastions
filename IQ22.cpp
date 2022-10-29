#include<iostream>
using namespace std;
class student
{
	int id;
	char name[20];
	float per;
	public:
	void getdata()
	{
		cout<<"\n Enter Student Id : ";
		cin>>id;
		cout<<"\n Enter Student name : ";
		cin>>name;
		cout<<"\n Enter Student percentage : ";
		cin>>per;
	}
	void putdata()
	{
		cout<<"\n Student Id         : "<<id;
		cout<<"\n student Name       : "<<name;
		cout<<"\n student percentage : "<<per;
	}
};//s1;// global object 
int main()
{
	student s1; //local object
	s1.getdata();
	s1.putdata();
	return 0;
}

