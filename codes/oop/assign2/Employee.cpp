#include <iostream>
using namespace std;

class Employee
{
	private:
		int ID;
		string department;
		double bal;
		double monthly_contrib;
		 
	public:
		Employee();//constructor1
		Employee(int id);//constructor2
		Employee(int id,string depart);//constructor3
		void showData();//prototype for method showDate()

};
//constructor1 definition
Employee::Employee()
{
	Employee::ID=0;
	Employee::department="0";
	Employee::bal=0.00;
	Employee::monthly_contrib=0.00;
}

//constructor2 definition
Employee::Employee(int id)
{
	Employee::ID=id;
	Employee::department="0";
	Employee::bal=0.00;
	Employee::monthly_contrib=0.00;
}

//constructor3 definition
Employee::Employee(int id,string depart)
{
	Employee::ID=id;
	Employee::department=depart;
	Employee::bal=0.00;
	Employee::monthly_contrib=0.00;
}


//definition for method showdata
void Employee::showData()
{
	cout<<"Employee ID: "<<Employee::ID<<endl;
	cout<<"Employee department "<<Employee::department<<endl;
	cout<<"Employee balance "<<Employee::bal<<endl;
	cout<<"monthly contribution "<<Employee::monthly_contrib<<endl;
}


//main implementation

int main()
{
	Employee employee1;
	Employee employee2(120004);
	Employee employee3(120015,"Forestry");

	cout<<endl<<endl<<"Testing the constructor that takes no arguements"<<endl<<endl;
	employee1.showData();

	cout<<endl<<endl<<"Testing the constructor that takes only ID as an arguement"<<endl<<endl;
	employee2.showData();

	cout<<endl<<endl<<"Testing the constructor that takes ID and department as arguements"<<endl<<endl;
	employee3.showData();

	return 0;
}
