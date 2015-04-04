#include <iostream>

class Fraction
{
	private:
		int numerator=1;
		int denominator=1;
	public:
		void getFraction(int num,int den);
		void displayFraction();
};
//methods for the class
void Fraction::getFraction(int num,int den)
{
	Fraction::numerator=num;
	Fraction::denominator=den;
}

void Fraction::displayFraction()
{
	std::cout<<"The fraction is ";
	std::cout<<Fraction::numerator;
   	std::cout<<"/";
    std::cout<<Fraction::denominator<<std::endl;
}
//end of class methods
int main()
{
	Fraction myFraction;
	int num,den;
	std::cout<<"please input numerator";
	std::cin>>num;
	std::cout<<"please input numerator";
	std::cin>>den;
	myFraction.getFraction(num,den);
	myFraction.displayFraction();
	return 0;

}
