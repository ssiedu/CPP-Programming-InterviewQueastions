#include<iostream>
using namespace std;
int main()
{
	int i,num,sum=0;
	cout<<"\n Enter any number : ";
	cin>>num;
	
	for(i=2;i<=num;i+=2)
	{
		sum+=i;//sum = sum+i
	}
	cout<<"\n Sum of all even number between 1 to "<<num<<" : "<<sum;
	return 0;
}
