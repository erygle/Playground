#include<iostream>
#include<vector>
using namespace std;
template <typename T>

void print(vector<T> &v);

int main(int argc, char const *argv[]){
    vector <int> v1(3,5);
    vector <int> v2(10);
    vector <int> v3(&v2[4],&v2[7]);
    vector <int> v4(v1);

    /*vector <int>::iterator i = v1.begin();
    while(i != v1.end())cout<<*i++<<" ";*/
    
    print(v1);
    cout<<endl;
    print(v2);
    cout<<endl;
    print(v3);
    cout<<endl;
    print(v4);
    cout<<endl;
    
    return 0;
}
template <typename T>
void print(vector<T> &v){
    typename vector<T>::iterator i = v.begin();
    while(i != v.end())cout<<*i++<<" ";
}