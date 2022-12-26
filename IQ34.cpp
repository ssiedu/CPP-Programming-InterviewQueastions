#include<iostream>
using namespace std;
class BaseArea
{
	protected:
		float radius;
	public:
		void get_radius()
		{
			cout<<"\n Enter the radius of circle : ";
			cin>>radius;
		}
};
class Derive : public BaseArea
{
	float cal_area;
	public:
		void get_calculate()
		{
			cal_area=3.14*radius*radius;
			cout<<"Area of circle : "<<cal_area;
		}
};

int main()
{
	Derive obj1;
	obj1.get_radius();
	obj1.get_calculate();
	return 0;
}




