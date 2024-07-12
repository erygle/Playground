#include<iostream>
#include"Square.h"

using namespace std;
using namespace sqre;

void foo(Square square){

}
Square foo2(){
    Square square;//default
    return square;
}


int main(int argc, char const *argv[]){
    Square square; //default
    //foo(square); //copy
    //Square square2 = foo2(); //default
    //Square mySquare = square; //copy
    Square mySquare; //default
    mySquare = square;
    return 0;
}
