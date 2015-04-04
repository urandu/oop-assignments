#include <iostream>
using namespace std;

class Dates
{
	private:
		int month,day,year;
		 static char slash;
	public:
		Dates();//constructor
		void getDate(int m, int d, int y);//prototype for method getDate()
		void showDate();//prototype for method showDate()

};

Dates::Dates()
{
	Dates::day=1;
	Dates::month=1;
	Dates::year=2000;
}

//Dates::slash="/";//iniatialization of static slash variable
char Dates::slash='/';
//function definitions for class Dates
void Dates::getDate(int m, int d, int y)
{
	Dates::day=d;
	Dates::month=m;
	Dates::year=y;
}

void Dates::showDate()
{
	cout<<"The date is "<<Dates::month<<Dates::slash<<Dates::day<<Dates::slash<<Dates::year<<endl;
}
//End of function definitions for class Dates


int main()
{
	Dates myDate;
	cout<<endl<<"Testing the constructor"<<endl<<endl;
	//myDate.getDate(10,15,1999);
	myDate.showDate();

	return 0;
}
