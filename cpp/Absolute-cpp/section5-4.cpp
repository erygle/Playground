#include<iostream>
#include<iomanip>
#define STUDENT_NUMS 4
#define QUIZ_NUMBERS 3
using namespace std;
void studentAverage(int grade[][QUIZ_NUMBERS],double stAve[]);
void quizAverage(const int grade[][QUIZ_NUMBERS],double quizAve[]);
void display(const int grade[][QUIZ_NUMBERS],const double stAve[],const double quizAve[]);

int main(int argc, char const *argv[]){
    int grade[STUDENT_NUMS][QUIZ_NUMBERS];
    double stAve[STUDENT_NUMS];
    double quizAve[QUIZ_NUMBERS];

    studentAverage(grade,stAve);
    quizAverage(grade,quizAve);
    display(grade,stAve,quizAve);
    return 0;
}
void studentAverage(int grade[][QUIZ_NUMBERS],double stAve[]){
    for(int i=0; i<STUDENT_NUMS; i++){
        cout<<"Student "<<i+1<<" infos"<<endl;
        double sum = 0;
        for(int j=0; j<QUIZ_NUMBERS; j++){
            cout<<"Quiz "<<j+1<<" score : ";
            cin>>grade[i][j];
            sum += grade[i][j];
        }stAve[i] = sum / QUIZ_NUMBERS;
        cout<<endl;
    }
}
void quizAverage(const int grade[][QUIZ_NUMBERS],double quizAve[]){
    for(int i=0; i<QUIZ_NUMBERS; i++){
        double sum = 0;
        for(int j=0; j<STUDENT_NUMS; j++)sum += grade[j][i];
    quizAve[i]= sum / STUDENT_NUMS;
    }
}
void display(const int grade[][QUIZ_NUMBERS],const double stAve[],const double quizAve[]){
    cout<<setw(10)<<"Student"<<setw(5)<<"Ave"<<setw(15)<<"Quizzes"<<endl;
    for(int i=0; i<STUDENT_NUMS; i++){
            cout<<setw(5)<<i+1<<setw(10)<<stAve[i]<<setw(5)<<" ";
        for(int j=0; j<QUIZ_NUMBERS; j++){
            cout<<setw(5)<<grade[i][j];
        }cout<<endl;
    }
    cout<<"   Quiz Average :   ";
    for(int i=0; i<QUIZ_NUMBERS; i++)cout<<setw(5)<<quizAve[i];
    cout<<endl;
}