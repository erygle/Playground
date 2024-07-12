#pragma once
#include<iostream>

namespace sqre{
    class Square{
        public:
            /*Square(){
                length_ = 2;
                std::cout<<"This is default constructor."<<std::endl;
            }
            Square(const Square &obj){
                length_ = obj.length_;
                std::cout<<"This is copy constructor."<<std::endl;
            }*/
            /*Square::operator=(const Square &obj){
                length_=obj.length_;
                std::cout<<"This is assignment constructor."<<std::endl;
                return *this;
            }*/
    private:
        double length_;
    };
} // namespace sqre
