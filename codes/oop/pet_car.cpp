#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;


class Pet
{
public:
	void setData(string breed,int age,int price);
	void displayData();

private: 
	string breed_name;
	int pet_age;
	int pet_price;

};

void Pet::setData(string breed,int age,int price)
{
	Pet::breed_name=breed;
	Pet::pet_age=age;
	Pet::pet_price=price;
}
void Pet::displayData()
{
	std::cout<<Pet::pet_age<< (*this).breed_name<<Pet::pet_price<<std::endl;
}

int main()
{
Pet myDog;
myDog.setData("bulldog",2,340000);
myDog.displayData();
//system("pause");
return 0;

}

















