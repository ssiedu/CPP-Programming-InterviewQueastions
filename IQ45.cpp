#include<iostream>
using namespace std;
template<class T>
class Number
{
	private:
		T num;
	public:
		Number( T n)
		{
			num=n;
		}
		T getnum();
		/*{
			return num*num;
		}*/
};
template<class T>
T Number <T> :: getnum()
{
	return num*num;
}
int main()
{
	Number <int>obj(7);
	Number <double>obj1(2.2);
	cout<<"square of integer number : "<<obj.getnum()<<endl;
	cout<<"sqaure of double number  : "<<obj1.getnum()<<endl;
	return 0;
}
