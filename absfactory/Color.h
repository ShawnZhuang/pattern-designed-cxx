#ifndef COLOR_H_H
#define COLOR_H_H value

class Color
{
public:
virtual void fill()=0;
};

class Red:public Color
{
public:
	void fill();
};
class Green:public Color
{
public:
	void fill();
	
};

class Blue:public Color
{
public:
	void fill();
};


#endif

