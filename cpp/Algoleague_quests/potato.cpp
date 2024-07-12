#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    vector<int>left(size);
    vector<int>right(size);
    vector<int>dif(size);
    int suml=0;
    int sumr=0;
    int sum;
    for(int i=0 ; i<size ; i++){
        int temp;
        cin>>temp;
        left.push_back(temp);
        suml += temp;
    }
    for(int i=0 ; i<size ; i++){
        int temp;
        cin>>temp;
        right.push_back(temp);
        sumr += temp;
    }
    sum = sumr+suml;
    if(sum%2 == 0)cout<<"Potato Girl "<<sum;
    else cout<<"Sasha Blouse";
	return 0;
}
