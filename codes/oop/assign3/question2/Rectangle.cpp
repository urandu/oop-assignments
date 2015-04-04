
class Rectangle
{
protected:
	int width;
	int length;
public:
	//method prototypes
	void setWidth(int wid);
	void setLength(int len);
	int getWidth();
	int getLength();
	int getArea();
};

//definition of class prototypes
void Rectangle::setWidth(int wid)
{
	this->width=wid;
}

void Rectangle::setLength(int len)
{
	this->length=len;
}

int Rectangle::getWidth()
{
	return Rectangle::width;
}

int Rectangle::getLength()
{
	return Rectangle::length;
}

int Rectangle::getArea()
{
	return Rectangle::length*Rectangle::width;
}

//end of method definitions.
