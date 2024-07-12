#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    int size,q;
    cin>>size;

    map<int,int>m;
    int temp;
    for(int i=0 ; i<size ; i++){
        cin>>temp;
        m[i+1]=temp;;
    }
    
    cin>>q;
    vector<int>l(q);
    vector<int>r(q);
    vector<int>x(q);
    for(int i=0 ; i<q ; i++)cin>>l[i]>>r[i]>>x[i];

    for(int i=0 ; i<q ; i++){
        
    }




    /*while(q--){
        cin>>l>>r>>x;
        int counter = 0;
        for(int i=l ; i<=r ; i++){
            if(x==m[i])counter++;
        }cout<<counter<<endl;
    }*/

    return 0;
}
