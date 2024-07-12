#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);

    for(int i=0; i<s.length(); i++){
        s[i] = toupper(s[i]);
    }

    cout<<"Upper case string: "<<s<<endl;
    return 0;
}
