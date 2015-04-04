
/*
 * Block.h
 *
 *  Created on: 9 Mar 2014
 *      Author: hp
 */
#include "Rectangle.cpp"
#ifndef BLOCK_H_
#define BLOCK_H_

class Block :public Rectangle {
private:
	int height;
public:
	void setHeight(int h)
	{
		height=h;
	}
	int getHeight()
	{
		return height;
	}
	
	int getArea()//overide method getArea() from the base class
	{
		return length*width*height;
	}
};

#endif /* BLOCK_H_ */
