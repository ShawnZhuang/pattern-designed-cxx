#ifndef ABSTRACT_FACTORY
#define ABSTRACT_FACTORY
#include "Color.h"
#include "Shape.h"

enum ShapeType {
	SHAPE_CIRCLE=8,
	SHAPE_SQUARE,
	SHAPE_RECTANGLE
};
enum ColorType {
	COLOR_RED = 8,
	COLOR_GREEN,
	COLOR_BLUE
};


class AbsFactory
{
public:
	virtual Shape* newShape(enum ShapeType type);
	virtual Color* newColor(enum ColorType type);
};


class ShapeFactory:public AbsFactory
{
public:
	Shape* newShape(enum ShapeType type);
};


class ColorFactory: public AbsFactory
{
public:
	Color* newColor(enum ColorType type);
};


#endif


