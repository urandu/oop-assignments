#include<iostream>
#include<string>
using namespace std;


class Pet
{

	private: 
		string breed;
		int age;
		int price;
//method prototypes for class pet
	public:
		void setData(string breed,int age,int price);
		void displayData();

};
//method definitions for classpet
void Pet::setData(string breed,int age,int price)
{
	Pet::breed=breed;
	Pet::age=age;
	Pet::price=price;
}
void Pet::displayData()
{
	std::cout<<"pets age: "<<Pet::age<<std::endl;
	std::cout<<"pets breed: "<<Pet::breed<<std::endl;
	std::cout<<"price: ksh."<<Pet::price<<std::endl;
}
//end of method definitions for class pet
