#ifndef SHAPE_H_H
#define SHAPE_H_H

class Shape
{
public:
	virtual void draw() = 0;
};


class Circle: public Shape
{
public:
	Circle();
	void draw();
};
class Square:public  Shape
{
public:
	Square();
	void draw();
};

class Rectangle:public Shape
{
public:
	Rectangle();
	void draw();
};
#endif

