#include <iostream>
#include "Shape.h"

// Circle::Circle(){};
// Square::Square(){};
// Rectangle::Rectangle(){};
void Circle::draw(){
	std::cout<<"Circle::"<<__func__<<std::endl;
}
void Square::draw(){
	std::cout<<"Square::"<<__func__<<std::endl;
}
void Rectangle::draw(){
	std::cout<<"Rectangle::"<<__func__<<std::endl;
}
