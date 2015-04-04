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
	this->ID_number=idNum;
	this->modelYear=modYear;
	this->price=price;
}

void Vehicle::displayData()
{
	cout<<"ID number  is : "<<this->ID_number<<endl;
	cout<<"model year :"<<this->modelYear<<endl;
	cout<<"price : ksh."<<this->price<<endl;
	cout<<"dealer number :"<<this->dearlerNum<<endl;
}
//End of function definitions for class Vehicle


int main()
{
	Vehicle myVehicles[3];
	
	myVehicles[0].setData(1001,2000,800000);
	myVehicles[1].setData(1002,1970,500000);
	myVehicles[2].setData(1003,1984,300000);
	
	for(int x=0;x<3;x++)
	{
	cout<<"\n\t\tVehicle :"<<(x+1)<<endl;
	myVehicles[x].displayData();
	}
	return 0;
}
