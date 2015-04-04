#include "Pet.h"
#include "Vehicle.h"

int main()
{
	Pet bulldog;
	Vehicle benz2013;
	
	//instantiating and printing a pet object
	cout<<endl<<"my favourite pet"<<endl<<endl;
	bulldog.setData("bulldog",2,1500.00);
	bulldog.displayData();
	//instantiating and printing a vehicle object
	cout<<endl<<"my favourite car"<<endl<<endl;
	benz2013.setData(1001,2005,8000000);
	benz2013.displayData();
	

	return 0;
}
