/*#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(int argc, char* argv[]){
    string name,lastName;
    int score;
    fstream inputStream;
    
    inputStream.open("text.txt");

    inputStream >> score;
    inputStream >> name >> lastName;

    cout<<"Name: "<<name<<endl<<"Last Name: "<<lastName<<endl<<"Score: "<<score;
    inputStream.close();
    return 0;

}*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main( )
{
string firstName, lastName;
int score;
fstream inputStream;
 inputStream.open("text.txt");
 inputStream >> score;
 inputStream >> firstName >> lastName;
 cout << "Name: " << firstName << " "
 << lastName << endl;
 cout << "Score: " << score << endl;
 inputStream.close();
 return 0;
 }