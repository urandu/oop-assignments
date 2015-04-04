#include <iostream>
using namespace std;

class Dates
{
	private:
		int month,day,year;
		 static char slash;
	public:
		Dates(int m, int d, int y);//constructor
		Dates(int m, int d);//constructor
		void getDate(int m, int d, int y);//prototype for method getDate()
		void showDate();//prototype for method showDate()

};

Dates::Dates(int m, int d)
{
	Dates::day=d;
	Dates::month=m;
	Dates::year=1999;
}

Dates::Dates(int m, int d, int y)
{
	Dates::day=d;
	Dates::month=m;
	Dates::year=y;
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
	Dates myDate(10,15,2013);
	Dates myDate2(10,15);
	cout<<endl<<endl<<"Testing the constructor that takes three arguements"<<endl<<endl;
	//myDate.getDate(10,15,2013);
	myDate.showDate();

	cout<<endl<<endl<<"Testing the constructor that takes only month and date"<<endl<<endl;
	//myDate2.getDate;
	myDate2.showDate();
	
	

	return 0;
}
