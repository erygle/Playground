#include<stdio.h>
#include<math.h>
void bmi_calculation (double wei,double hei);
int main(int argc, char const *argv[]){
    double weight,height;
    printf("Please enter weight(kg) : ");
    scanf("%lf",&weight);
    printf("Please enter height(m) : ");
    scanf("%lf",&height);
    bmi_calculation(weight,height);
    puts("");
return 0;
}
void bmi_calculation (double wei,double hei){
    double bmi = wei/pow(hei,2);
    printf("Your category : ");
    if(bmi<16.0)printf("Severely Underweight.");
    else if(bmi>=16.0 && bmi<18.4)printf("Underweight.");
    else if(bmi>=18.4 && bmi<24.9)printf("Normal.");
    else if(bmi>=24.9 && bmi<30.0)printf("Overweight.");
    else printf("Obese.");
}