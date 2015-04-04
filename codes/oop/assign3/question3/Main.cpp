#include <iostream>
#include "Fiction.cpp"
#include "NonFiction.cpp"
using namespace std;

int main()
{
	//declaration of objects from the three classes
	Book book;
	Fiction fiction;
 	NonFiction nonFiction;
	
	//instantiating variable for the three classes
	book.setAuthor("kalulu");
	book.setTitle("kurumputi ya westgate");
	
	fiction.setAuthor("namawa");
	fiction.setTitle("how i became a billionnare!!!");
	fiction.setReadingLevel(7);//grade reading level

	nonFiction.setAuthor("urandu");
	nonFiction.setTitle("the art of c programming");
	nonFiction.setPages(300);
	
	cout<<"demonstrating base class Book"<<endl;
	cout<<"*****************************"<<endl<<endl;
	cout<<"Book Title: "<<book.getTitle()<<endl;
	cout<<"Book Author: "<<book.getAuthor()<<endl<<endl<<endl;


	cout<<"demonstrating class Fiction"<<endl;
	cout<<"*****************************"<<endl<<endl;
	cout<<"Book Title: "<<fiction.getTitle()<<endl;
	cout<<"Book Author: "<<fiction.getAuthor()<<endl;
	cout<<"Grade Reading Level: "<<fiction.getReadingLevel()<<endl<<endl<<endl;

	cout<<"demonstrating class NonFiction"<<endl;
	cout<<"*****************************"<<endl<<endl;
	cout<<"Book Title: "<<nonFiction.getTitle()<<endl;
	cout<<"Book Author: "<<nonFiction.getAuthor()<<endl;
	cout<<"Number of pages: "<<nonFiction.getPages()<<endl<<endl<<endl;


	return 0;
}
