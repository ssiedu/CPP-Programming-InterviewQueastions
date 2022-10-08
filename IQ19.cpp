#include<iostream>
using namespace std;
#define MAX_SIZE 100
//Function declaration
 void PrintArray(int arr[] , int start , int len);
int main()
{
	int arr[MAX_SIZE];
	int num, i;
	
	cout<<"\n Enter the size of Array : ";
	cin>>num;
	
	cout<<"\n Enter elements in the array : ";
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\n Elements in the Array : ";
	PrintArray(arr,0,num);
	
	return 0;
}

void PrintArray(int arr[] , int start , int len)
{
	if(start >= len)
		return ;
		
	cout<<arr[start]<<"\t";
	PrintArray(arr , start+1 , len);
}











