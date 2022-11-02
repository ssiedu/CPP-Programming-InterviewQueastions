
#include<iostream>
using namespace std;
class Student
{
	int roll_no;
	char name[20];
	float per;
	public:
		void get_records();
		void print_records();
};
void Student :: get_records()
{
	cout<<"\n Enter Student roll no : ";
	cin>>roll_no;
	cout<<"\n Enter Student name : ";
	cin>>name;
	cout<<"\n Enter Student Percentage : ";
	cin>>per;
}
void Student :: print_records()
{
	cout<<"\n Student Roll No    : "<<roll_no;
	cout<<"\n Student Name       : "<<name;
	cout<<"\n Student Percentage : "<<per;
}
int main()
{
	Student stu[10];// Array of object 
	int n,i;
	cout<<"\n How many Students Record Do you want to enter : "<<endl;
	cin>>n;
	cout<<"\n Please Enter Number of Students Record : "<<endl;
	for(i=0;i<n;i++)
	{
		stu[i].get_records();
	}
	cout<<"\n Details of Student In Our Record : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"\n Student  "<<i+1<<" information : "<<endl;
		stu[i].print_records();
	}
	return 0;
	
	
	
	
}









