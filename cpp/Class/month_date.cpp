#include<iostream>
using namespace std;

class Date{
    private:
        int month,day;
    public:
        void getDate(int dayValue,int monthValue);
        int getDay();
        int getMonth();
        void getMonthName();
        void output();
        void input();

};
int main(int argc, char const *argv[]){
    Date date,birth;
    date.input();

    cout<<"Today is ";
    date.output();
    cout<<endl;
    
    cout<<"Your birthday";
    cout<<endl;
    birth.input();
    if(birth.getDay() == date.getDay() && birth.getMonth() == date.getMonth())cout<<"Happy birthday!"<<endl;
    else cout<<"Happy unbirthday!"<<endl;
    return 0;
}
void Date::getDate(int dayValue,int monthValue){
    if(dayValue <= 12 && dayValue > 0) day = dayValue;
    else exit(1);
    if(monthValue <= 12 && monthValue > 0) month = monthValue;
    else exit(1);
}
int Date::getDay(){
    return day;
}
int Date::getMonth(){
    return month;
}
void Date::getMonthName(){
    switch (month)
    {
    case 1:
        cout<<"January ";
        break;
    case 2:
        cout<<"February ";
        break;
    case 3:
        cout<<"March ";
        break;
    case 4:
        cout<<"April ";
        break;
    case 5:
        cout<<"May ";
        break;
    case 6:
        cout<<"June ";
        break;
    case 7:
        cout<<"July ";
        break;
    case 8:
        cout<<"August ";
        break;
    case 9:
        cout<<"September ";
        break;
    case 10:
        cout<<"October ";
        break;
    case 11:
        cout<<"November ";
        break;
    case 12:
        cout<<"December ";
        break;    
    default:
        cout<<"Illegal Date ";
        break;
    }
}
void Date::output(){
    Date::getMonthName();
    cout<<day;
}
void Date::input(){
    cout<<"Enter day : ";
    cin>>day;
    cout<<"Enter month : ";
    cin>>month;
}