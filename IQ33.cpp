#include<iostream>
using namespace std;
class Employee
{
	int id;
	char name[20];
	float salary;
	public:
		void getdata()
		{
			cout<<"\n Enter Employee Id : ";
			cin>>id;
			cout<<"\n Enter Employee Name : ";
			cin>>name;
			cout<<"\n Enter Employee Salary : ";
			cin>>salary;
		}
		void display()
		{
			cout<<"Employee Details : "<<endl;
			cout<<id<<"\t"<<name<<"\t"<<salary<<endl;
		}
};
int main()
{
	Employee *e=new Employee();
	e->getdata();
	e->display();
	delete e;
	return 0;
}
