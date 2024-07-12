#include <bits/stdc++.h>

using namespace std;

void compare(int a,int b){
    if(a>b)cout<<"Harun";
    else cout<<"Sami";
}

int main() {
    int n,k;
    cin>>n>>k;
    char winner;
    int hc=0,sc=0;
    for(int i=0 ; i<k ; i++){
        cin>>winner;
        if(winner == 'H')hc++;
        else sc++;
    }
    if((abs(sc-hc))<=(n-k))cout<<"Cilek";
    else compare(hc,sc);
	return 0;
}
/*long long n,q;
    cin>>n>>q;
    map<long long,bool>m;
    while(n--){
        long long l,r;
        cin>>l>>r;
        for(long long i=l ; i<=r ; i++){
            m[i]=1;
        }
    }
    long long num;
    for(long long i=0 ; i<q ; i++){
        cin>>num;
        if(m[num]==1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }*/