//Brace your keyboard
//inzva community built algoleague for every algorithm enthusiast hungry for self-improvement and friendly competition. Have fun and good luck!

#include <bits/stdc++.h>

using namespace std;

int main() {
// write your code here
    int size;
    cin>>size;
    set<int>arr;
    for(int i=0 ; i<size ; i++){
        int temp;
        cin>>temp;
        arr.insert(temp);
    }int sum=0;
    arr.
    for(auto k : arr)sum+=k;
    cout<<round(sum/arr.size());
	return 0;
}
