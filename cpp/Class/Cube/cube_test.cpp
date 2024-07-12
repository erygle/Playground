#include<iostream>
#include"Cube.h"

using namespace std;
using namespace cubc;

int main(int argc, char const *argv[]){
    Cube cube(2.74);
    //cube.getLength(4.23);
    
    double volume = cube.getVolume();
    double surface = cube.getSurfaceArea();

    cout<<"Volume : "<<cube.getVolume()<<endl<<"Surface Area : "<<surface<<endl;

    
    return 0;
}
void Cube::getLength(double length){
    length_ = length;
}
double Cube::getVolume(){
    return length_*length_*length_;
}
double Cube::getSurfaceArea(){
    return 6*length_*length_;
}