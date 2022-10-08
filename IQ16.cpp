#include<iostream>
using namespace std;

long int fact(int num);
void printStrongNumbers(int start , int end);

int main()
{
	int start,end;
	cout<<"\n Enter the lower limit : ";
	cin>>start;
	cout<<"\n Enter the upper limit : ";
	cin>>end;
	
	cout<<" List of strong Numbers between "<<start<< " to "<<end<< "are : "<<endl;
	printStrongNumbers(start,end);
	return 0;
}

void printStrongNumbers(int start, int end)
{
	long int sum;
	int num;
	while(start != end)
	{
		sum=0;
		num=start;
		
		while(num!=0)
		{
			sum += fact(num%10);
			num /= 10;
		}
		
		if(start == sum)
		{
			cout<< start <<endl;
		}
		start++;
	}
	
}

long int fact(int num)
{
	if(num==0)
	return 1;
	else
	return (num*fact(num-1));
}
