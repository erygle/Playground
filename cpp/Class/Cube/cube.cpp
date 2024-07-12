#include"Cube.h"
using namespace cubc;

double Cube::getVolume(){
    return length_*length_*length_;
}
double Cube::getSurfaceArea(){
    return 6*length_*length_;
}
void Cube::getLength(double length){
    length_ = length;
}