#include<iostream>
#include<math.h>
using namespace std;

int checkPrimeNumber(int );
int checkArmstrongNumber(int );

int main()
{
	int num , flag;
	
	cout<<"\n Enter a positive number : ";
	cin>>num;
	
	flag = checkPrimeNumber(num);
	if(flag==1)
		cout<<num <<" is a prime number"<<endl;
	else
		cout<<num <<" is not a prime number"<<endl;
		
	flag = checkArmstrongNumber(num);
	if(flag == 1)
		cout<<num << " is a armstrong number "<<endl;
	else
		cout<<num << " is not a armstrong number"<<endl;
		
	return 0;
}

int checkPrimeNumber(int num)
{
	int i,flag=1;
	
	for(i=2;i<=num/2;i++)
	{
		if(num%i ==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}

int checkArmstrongNumber(int number)
{
	int originalNumber,rem,result=0,num=0,flag;
	
	originalNumber = number;

	
	while(originalNumber != 0)
	{
		originalNumber /= 10;
		++num;
	}
	
	originalNumber = number;
	while(originalNumber != 0)
	{
		rem = originalNumber%10;
		result += pow(rem,num);
		originalNumber /= 10;
		
	}
	
	if(result == number)
		flag=1;
	else
		flag=0;
		
		return flag;
}











