#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class Inventory
{
	int item_no;
	char name[20];
	float price;
	public:
		void readData();
		void writeData();
};
void Inventory :: readData()
{
	cout<<"\n Enter Item Number : ";
	cin>>item_no;
	cout<<"\n Enter Item Name : ";
	cin>>name;
	cout<<"\n Enter Item Price : ";
	cin>>price;
}
void Inventory :: writeData()
{
	cout<<setw(10)<<item_no<<setw(10)<<name<<setw(10)<<price<<endl;
}
int main()
{
	fstream file;
	file.open("Stock.dat",ios::in|ios::out|ios::app);
	Inventory item[3];
	int i;
	cout<<"\n Enter details of three items : \n";
	for(i=0;i<3;i++)
	{
		cout<<" Item "<<i+1;
		item[i].readData();
		file.write((char*)&item[i],sizeof(item[i]));
	}
	file.seekg(0);
	cout<<"\n Details of Item :\n";
	for(i=0;i<3;i++)
	{
		file.read((char*)&item[i],sizeof(item[i]));
		item[i].writeData();
	}
	file.close();
	return 0;
}

