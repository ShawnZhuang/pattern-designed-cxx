#include <iostream>
#include "AbsFactory.h"
#include "FactoryProducer.h"
int tc_factory() {
	ShapeFactory factory;
	Shape* shape = factory.newShape(SHAPE_CIRCLE);
	shape->draw();
	Shape* shape2 = factory.newShape(SHAPE_SQUARE);
	shape2->draw();
	Shape* shape3 = factory.newShape(SHAPE_RECTANGLE);
	shape3->draw();
	delete shape, shape2, shape3;
	return 0;
}

int tc_abstract_factory(){
	FactoryProducer factoryproducer;
	AbsFactory* factory=factoryproducer.getFactory(FACTORY_COLOR);
	AbsFactory* shapeFactor=factoryproducer.getFactory(FACTORY_SHAPE);
	Color* blue=factory->newColor(COLOR_BLUE);
	Color* red=factory->newColor(COLOR_RED);
	Color* green=factory->newColor(COLOR_GREEN);
 	blue->fill();
	red->fill();
	green->fill();
	Shape* circle=shapeFactor->newShape(SHAPE_CIRCLE);
	Shape* square=shapeFactor->newShape(SHAPE_SQUARE);
	Shape* retangel=shapeFactor->newShape(SHAPE_RECTANGLE);
 	circle->draw();
	square->draw();
	retangel->draw();
	delete circle,square,retangel;
	delete blue,red,green;
	delete factory,shapeFactor;
	return 0;
}

int main(int argc, char const *argv[])
{
	tc_factory();
	tc_abstract_factory();
	return 0;
}