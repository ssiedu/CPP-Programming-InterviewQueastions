#include<iostream>
using namespace std;
class Base 
{
	protected:
		int number;
	public:
		void get_Number()
		{
			cout<<"\n Enter Any Number : ";
			cin>>number;
		}
};
class Square : public Base
{
	int cal_Sarea;
	public:
		void calculate_square()
		{
			cal_Sarea=number*number;
			cout<<"\n Area of square  :"<<cal_Sarea;
		}
};
class Cube : public Base
{
	int cal_Carea;
	public:
		void calculate_Cube()
		{
			cal_Carea=number*number*number;
			cout<<"\n Area of Cube : "<<cal_Carea;
		}
};
int main()
{
	Square s;
	s.get_Number();
	s.calculate_square();
	Cube c;
	c.get_Number();
	c.calculate_Cube();
	return 0;
}
