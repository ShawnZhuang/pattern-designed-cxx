#include "factory.h"
#include <iostream>
Shape* ShapeFactory::newShape(enum ShapeType type) {
	switch (type){
	case (SHAPE_CIRCLE):
		return new Circle();
		break;
	case (SHAPE_RECTANGLE):
		return new Rectangle();
		break;
	case (SHAPE_SQUARE):
		return new Square();
		break;
	default:
		return NULL;

	}
}