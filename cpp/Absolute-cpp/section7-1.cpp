#include<iostream>
#include<cstdlib>

using namespace std;

class MonthAndDays{
    private:
        int month;
        int day;
    
    public:
        MonthAndDays(int month, int day);
        MonthAndDays(int month);
        MonthAndDays();
            
        void output();

};

int main(int argc, char const *argv[]){
    MonthAndDays day1(1,30); 
    MonthAndDays day2(3);
    MonthAndDays day3;
    day1 = MonthAndDays(6);
    return 0;
}

MonthAndDays::MonthAndDays(int month,int day):month(month),day(day){
    output();
}
MonthAndDays::MonthAndDays(int month):month(month),day(1){
    output();
}
MonthAndDays::MonthAndDays():month(1),day(1){
    output();
}
void MonthAndDays::output(){
    if(month<1 || month>12){
        cout<<"Illegal month."<<endl;
        exit(1);
    }else cout<<month<<" ";
    
    if(day<1 || day>31){
        cout<<"Illegal day."<<endl;
        exit(1);
    }else cout<<day<<endl;
}