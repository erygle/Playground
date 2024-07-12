#include"Square.h"
#include<iostream>

using namespace sqre{
    public:
        Square::Square(){
                    length_ = 2;
                    std::cout<<"This is default constructor."<<std::endl;
                }
        Square::Square(const Square &obj){
            length_ = obj.length_;
                std::cout<<"This is copy constructor."<<std::endl;
            }
        Square & Square::operator=(const Square &obj){
            length_ = obj.length_;
            std::cout<<"This is assignment constructor."<<std::endl;
            return *this;
        }
}