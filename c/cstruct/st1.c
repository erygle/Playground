#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[15];
    char surname[15];
    int num;
    int age;
};

int main(int argc, char const *argv[]){
    struct student ery = {"Eray","Guler",190,19};
    printf("%s %s %d %d",ery.name,ery.surname,ery.age,ery.num);
    
puts("");
return 0;
}
