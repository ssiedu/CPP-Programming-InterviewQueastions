#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int lower,higher,i,temp1,temp2,rem,n=0,result=0;
	
	cout<<"\n Enter two Numbers : ";
	cin>>lower;
	cin>>higher;
	
	cout<<"\n armstrong number in between" << lower << "and " << higher << "are : ";
	for(i=lower+1 ;i<higher ;i++)
	{
		temp1 =i;
		temp2 = i;
		
		while(temp1 != 0)
		{
			temp1 /= 10;
			++n;
		}
		
		while(temp2 != 0)
		{
			rem = temp2 % 10;
			result += pow(rem,n);
			temp2 /= 10;
		}
		if(result == i)
		{
			cout<<i<<endl;
		}
		
		n=0;
		result=0;
		
	}
	return 0;
}
