#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int roll_no;
	char name[20];
	float per;
	ofstream fout("Student");
	cout<<"\n Enter Student Roll No : ";
	cin>>roll_no;
	fout<<roll_no<<endl;
	cout<<"\n Enter Student Name : ";
	cin>>name;
	fout<<name<<endl;
	cout<<"\n Enter Student Percentage : ";
	cin>>per;
	fout<<per<<endl;
	fout.close();
	ifstream fin("Student");
	fin>>roll_no;
	fin>>name;
	fin>>per;
	cout<<"\n Student roll no : "<<roll_no;
	cout<<"\n Student name    : "<<name;
	cout<<"\n Student percentage : "<<per;
	return 0;
	
}
