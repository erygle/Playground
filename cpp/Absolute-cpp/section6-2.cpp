#include<bits/stdc++.h>
#define PI 3.14
using namespace std;

class Circle{
    private:
        double radius;
    public:
        void getRadius(double rads);
        //double setRadius();
        double area_of_circle();
        double diameter_of_circle();
        double circumference_of_circle();
        void input();

};


int main(int argc, char const *argv[]){
    Circle circle;
    circle.input();
    cout<<"Diameter : "<<circle.diameter_of_circle()<<endl
        <<"Circumference : "<<circle.circumference_of_circle()<<endl
        <<"Area : "<<circle.area_of_circle()<<endl;
    return 0;
}
void Circle::getRadius(double rads){
    radius = rads;
}
double Circle::area_of_circle(){
    return 2 * PI * radius * radius;
}
double Circle::circumference_of_circle(){
    return 2 * radius * PI;
}
double Circle::diameter_of_circle(){
    return 2 * radius;
}
/*double Circle::setRadius(){
    return radius;
}*/
void Circle::input(){
    cout<<"Enter radius : ";
    cin>>radius;
}