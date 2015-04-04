#include "Book.cpp"

class Fiction : public Book
{
protected:
	int grade_reading_lavel;
public:
	void setReadingLevel(int level)
	{
		grade_reading_lavel=level;
	}

	int getReadingLevel()
	{
		return grade_reading_lavel;
	}
};
