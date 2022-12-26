#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\n Enter total number of students : ";
	cin>>num;
	float *ptr;
	ptr = new float[num];
	cout<<"\n Enter percentage of student : "<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"Student "<<i+1<<" : ";
		cin>>*(ptr+i);
	}
	cout<<"\n Displaying percentage of student "<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"Student "<<i+1<<":"<<*(ptr+i)<<endl;
	}
	delete []ptr;
	return 0;
}
