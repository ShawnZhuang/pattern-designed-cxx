#include "AbsFactory.h"
#include "FactoryProducer.h"
#include <iostream>
Shape* AbsFactory::newShape(enum ShapeType type) {
	std::cout << "ERROR: type is" << type << std::endl;
	return NULL;

};
Color* AbsFactory::newColor(enum ColorType type) {
	std::cout << "ERROR: type is" << type << std::endl;
	return NULL;
};

AbsFactory* FactoryProducer::getFactory(FactoryType type) {
	std::cout << FACTORY_SHAPE << "-" << FACTORY_COLOR << ":" << type << std::endl;
	switch (type) {
	case (FACTORY_SHAPE):
		return new ShapeFactory;
		break;
	case (FACTORY_COLOR):
		return new ColorFactory;
		break;
	default:
		std::cout << "ERROR: type is" << type << std::endl;
		return NULL;
	}

}


Shape* ShapeFactory::newShape(enum ShapeType type) {
	// std::cout << SHAPE_CIRCLE << "-" << SHAPE_SQUARE << "-" << SHAPE_RECTANGLE << ":" << type << std::endl;
	switch (type) {
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
		std::cout << "ERROR: type is" << type << std::endl;
		return NULL;
	}
}
Color* ColorFactory::newColor(enum ColorType type) {
	// std::cout << COLOR_RED << "-" << COLOR_GREEN << "-" << COLOR_BLUE << ":" << type << std::endl;
	switch (type) {
	case (COLOR_RED):
		return new Red();
		break;
	case (COLOR_GREEN):
		return new Green();
		break;
	case (COLOR_BLUE):
		return new Blue();
		break;
	default:
		std::cout << "ERROR: type is" << type << std::endl;
		return NULL;
	}
}