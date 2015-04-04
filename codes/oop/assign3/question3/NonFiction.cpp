//#include "Book.cpp"

class NonFiction : public Book
{
protected:
	int pages;
public:
	void setPages(int numOfPages)
	{
		pages=numOfPages;
	}

	int getPages()
	{
		return pages;
	}
};
