#include "Shape.h"
enum ShapeType {
	SHAPE_CIRCLE=8,
	SHAPE_SQUARE,
	SHAPE_RECTANGLE
};

class ShapeFactory
{
public:
	Shape* newShape(enum ShapeType type);
};


