#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int l,int r){
    if(l>=r)return;
    swap(s[l],s[r]);
    /*auto temp=s[l];
    s[l]=s[r];
    s[r]=temp;*/
    reverse(s,l+1,r-1);
}
int main(int argc, char const *argv[]){
    string s; //merhaba
    getline(cin,s);
    
    int l=0;
    int r=s.length()-1;

    cout<<"Fonksiyondan once cumle : "<<s<<endl;
    
    reverse(s,l,r);
    
    cout<<"Fonksiyondan sonra cumle : "<<s<<endl;
    
return 0;
}
