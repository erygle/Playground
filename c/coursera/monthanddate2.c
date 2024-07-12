#include<stdio.h>

typedef enum month{jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec}month;
typedef struct date{
    enum month m;
    int d;
} date;

void printDate(date day){
    if(day.m == 0) printf("January");
    else if(day.m == 1) printf("February");
    else if(day.m == 2) printf("March");
    else if(day.m == 3) printf("April");
    else if(day.m == 4) printf("May");
    else if(day.m == 5) printf("June");
    else if(day.m == 6) printf("July");
    else if(day.m == 7) printf("August");
    else if(day.m == 8) printf("September");
    else if(day.m == 9) printf("October");
    else if(day.m == 10) printf("November");
    else if(day.m == 11) printf("December");
    
    printf(" %d\n",day.d);
}

void nextday(date day){
    int monthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    if(day.d == monthDays[day.m]){
        day.d = 1;
        day.m = (day.m + 1)%12;
    }
    else day.d = day.d + 1;
    
    printf("Next day : ");
    printDate(day);
}

int main(){
    date d1;
    d1.d = 1;
    d1.m = 0;
    printDate(d1);
    nextday(d1);
    
    date d2;
    d2.d = 28;
    d2.m = 1;
    printDate(d2);
    nextday(d2);
    
    date d3;
    d3.d = 14;
    d3.m = 2;
    printDate(d3);
    nextday(d3);
    
    date d4;
    d4.d = 31;
    d4.m = 9;
    printDate(d4);
    nextday(d4);
    
    date d5;
    d5.d = 31;
    d5.m = 11;
    printDate(d5);
    nextday(d5);
    
    return 0;
}
