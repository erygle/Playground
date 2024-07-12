#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    int ang1, ang2, ang3;
    cin>>ang1>>ang2>>ang3;
    int sum = ang1 + ang2 + ang3;
    if((sum == 180) && (ang1 > 0) && (ang2 > 0) && (ang3 > 0)){
        cout<<"Valid triangle"<<endl;
    }
    else{
        cout<<"Invalid triangle"<<endl;
    }
    return 0;
}
