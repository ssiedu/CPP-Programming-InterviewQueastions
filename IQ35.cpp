#include<iostream>
using namespace std;
class Base_A
{
	protected:
		float length;
	public:
		void get_length()
		{
			cout<<"\n Enter length of rectangle : ";
			cin>>length;
		}
};
class Base_B
{
	protected:
		float breadth;
	public:
		void get_breadth()
		{
			cout<<"\n Enter breadth of rectangle : ";
			cin>>breadth;
		}
};
class Derive : public Base_A,public Base_B
{
	float cal_area;
	public:
		void calculate_Area()
		{
			cal_area=length * breadth;
		}
		void display_Area()
		{
			cout<<"Area of rectangle : "<<cal_area;
		}
};

int main()
{
	Derive d;
	d.get_length();
	d.get_breadth();
	d.calculate_Area();
	d.display_Area();
	return 0;
}
