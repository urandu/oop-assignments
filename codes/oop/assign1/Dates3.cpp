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
	Dates myDates[200];
	
	for (int x=0;x<200;x++)
	{
		myDates[x].getDate(m,d,y);
		d++;

		
		if(m==1)
		{
			if(d==32)
			{
				d=1;
				m=m+1;
			}
		}	

        if(m==2)
		{
			if((y%4)==0){
				if(d==30)
				{
				d=1;
				m=m+1;
				}
					
			}
			else if(d==29)
			{
				d=1;
				m=m+1;
			}
		}
	
		if(m==3)
		{
			if(d==32)
			{
				d=1;
				m=m+1;
			}
		}	

		if(m==4)
		{
			if(d==31)
			{
				d=1;
				m=m+1;
			}
		}	

		if(m==5)
		{
			if(d==32)
			{
				d=1;
				m=m+1;
			}
		}	

		if(m==6)
		{
			if(d==31)
			{
				d=1;
				m=m+1;
			}
		}	

		if(m==7)
		{
			if(d==32)
			{
				d=1;
				m=m+1;
			}
		}	

		if(m==8)
		{
			if(d==32)
			{
				d=1;
				m=m+1;
			}
		}	

		if(m==9)
		{
			if(d==31)
			{
				d=1;
				m=m+1;
			}
		}	

		if(m==10)
		{
			if(d==32)
			{
				d=1;
				m=m+1;
			}
		}	

		if(m==11)
		{
			if(d==31)
			{
				d=1;
				m=m+1;
			}
		}	
	
		if(m==12){
			if(d==32)
			{
				d=1;
				m=m+1;
			}
		}	

		if(m==13){
			y=y+1;
			m=1;
		}	


		myDates[x].showDate();
	}
	
	

	return 0;
}
