#include <iostream>
using namespace std;


class Vehicle
{
	private:
		int ID_number,price,modelYear;
		static int dearlerNum;
	public:
		void setData(int idNum, int modYear, int price);//prototype for method setData()
		void displayData();//prototype for method displayData()

};

//iniatialization of static dearlerNum variable
int Vehicle::dearlerNum=1056;

//function definitions for class Vehicle
void Vehicle::setData(int idNum, int modYear, int price)
{
	Vehicle::ID_number=idNum;
	Vehicle::modelYear=modYear;
	Vehicle::price=price;
}

void Vehicle::displayData()
{
	cout<<"ID number  is : "<<Vehicle::ID_number<<endl;
	cout<<"model year :"<<Vehicle::modelYear<<endl;
	cout<<"price : ksh."<<Vehicle::price<<endl;
	cout<<"dealer number :"<<Vehicle::dearlerNum<<endl;
}
//End of function definitions for class Vehicle


