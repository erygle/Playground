#include<iostream>
#include<ios>
#include<limits>
using namespace std;

int main(int argc, char* argv[]){
    int a;
    char ch[20];
    string str;
    
    cout<<"Enter number : ";
    cin>>a;
    cout<<a << endl << "Enter string : ";
    
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin.getline(ch,20);
    cout<<ch<<endl<<"Enter another string : ";
    
    cin>>ws;
    getline(cin,str);
    cout<<str<<endl;
return 0;    
}