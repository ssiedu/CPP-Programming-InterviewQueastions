#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual float calculateArea()=0;
		
};
class Square : public Shape
{
	float a;
	public:
		Square(float x)
		{
			a=x;
		}
		float calculateArea()
		{
			return a*a;
		}
};
class Circle : public Shape
{
	float r;
	public:
		Circle (float x)
		{
			r=x;
		}
		float calculateArea()
		{
			return 3.14*r*r;
		}
};
class Rectangle : public Shape
{
	float l,b;
	public:
		Rectangle(float x, float y)
		{
			l=x;b=y;
		}
		float calculateArea()
		{
			return l*b;
		}
};
int main()
{
	Shape *sh;
	Square s(3.4);
	Rectangle r(5,6);
	Circle c(5.6);
	sh=&s;
	float result1=sh->calculateArea();
	sh=&r;
	float result2=sh->calculateArea();
	sh=&c;
	float result3=sh->calculateArea();
	cout<<"\n Area of Square : "<<result1;
	cout<<"\n Area of rectangle : "<<result2;
	cout<<"\n Area of Circle : "<<result3;
	return 0;
}

















