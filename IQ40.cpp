#include <iostream>
using namespace std;
class Addition
{
	public:
		int sum(int num1, int num2)
		{
			return num1+num2;
		}
		int sum(int num1,int num2,int num3)
		{
			return num1+num2+num3;
		}
		float sum(float num1, float num2)
		{
			return num1+num2;
		}
};
int main()
{
	Addition obj;
	cout<<"Addition of two integer value : "<<obj.sum(10,20);
	cout<<"\n Addition of three integer value : "<<obj.sum(10,20,30);
	cout<<"\n Addition of two float value : "<<obj.sum(12.33f,34.56f);
	return 0;
}
