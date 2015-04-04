#include<iostream>
#include<string>
using namespace std;


class Pet
{

	private: 
		string breed;
		int age;
		int price;

	public:
		void setData(string breed,int age,int price);
		void displayData();

};

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
	std::cout<<"price:"<<Pet::price<<std::endl;
}

