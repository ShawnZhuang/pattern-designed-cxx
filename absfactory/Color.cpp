#include "Color.h"
#include <iostream>
void Red::fill(){
	std::cout<<"Red::"<<__func__<<std::endl;
} 
void Green::fill(){
	std::cout<<"Green::"<<__func__<<std::endl;
}
void Blue::fill(){
	std::cout<<"Blue::"<<__func__<<std::endl;
}