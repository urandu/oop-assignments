#include <iostream>
using namespace std;

class Dates
{
	private:
		int month,day,year;
		 static char slash;
	public:
		void getDate(int m, int d, int y);//prototype for method getDate()
		void showDate();//prototype for method showDate()

};

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
	int m=10,d=15,y=1999;
	Dates myDates[20];
	
	for (int x=0;x<20;x++)
	{
		myDates[x].getDate(m,d,y);
		d++;
		if(d==32)
		{
			d=1;
			m=m+1;
		}
		myDates[x].showDate();
	}
	//myDate.getDate(10,15,1999);
	

	return 0;
}
