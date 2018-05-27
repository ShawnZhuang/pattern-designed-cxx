#ifndef FACTORY_PRODUCER
#define FACTORY_PRODUCER
// #include "ColorFactory.h"
// #include "Shapefactory.h"
enum FactoryType
{
	FACTORY_COLOR,
	FACTORY_SHAPE,
};

class FactoryProducer
{
public:
	AbsFactory* getFactory(FactoryType type);
};
#endif