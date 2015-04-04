//base_class book
#include <string>
#include <iostream>

using namespace std;

class Book
{
protected:
	string title;
	string author;
public:
	void setTitle(string tit)
	{
		title=tit;
	}

	void setAuthor(string auth)
	{
		author=auth;
	}

	string getTitle()
	{
		return title;
	}

	string getAuthor()
	{
		return author;
	}
		
};
