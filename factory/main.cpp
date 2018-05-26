#include <iostream>
#include "factory.h"
int main(int argc, char const *argv[])
{
	ShapeFactory* factory;
	Shape* shape = factory->newShape(SHAPE_CIRCLE);
	shape->draw();
	Shape* shape2 = factory->newShape(SHAPE_SQUARE);
	shape2->draw();
	Shape* shape3 = factory->newShape(SHAPE_RECTANGLE);
	shape3->draw();
	delete shape, shape2, shape3;

}