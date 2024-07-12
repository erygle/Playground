#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    short n;
    auto k=0;
    cin>>n;
    short p=n;
    string s="";
    string arr = "0";
    string arr2 = "1";
    for(int i=0 ; i<=pow(2,n)*n ; i++){
        //cout<<i<<endl;
        if(i%n==0 && i!=0){
            cout<<s<<endl;
            s="";
            p=n;
            k++;
        }
        int temp = pow(2,p);
        if(k%temp<temp/2){
            s+=arr;
            p--;
        }else{
            s+= arr2;
            p--;
        }
    }
    
    return 0;
}
