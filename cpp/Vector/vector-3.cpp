#include<iostream>
#include<vector>
using namespace std;
template <typename T>
void print(vector <T> &v){
    typename vector<T>::iterator i = v.begin();
    while(i != v.end())cout<<*i++<<" ";
    cout<<endl;
}

int main(int argc, char const *argv[]){
    vector <int> v1;
    v1.insert(v1.begin(),6);
    v1.insert(v1.end(),10);
    v1.insert(v1.end(),11);
    v1.insert(v1.begin(),8);

    print(v1);

    cout<<"Size : "<<v1.size()<<endl;
    cout<<"Capacity : "<<v1.capacity()<<endl;

    v1.push_back(12);
    print(v1);

    cout<<"Size : "<<v1.size()<<endl;
    cout<<"Capacity : "<<v1.capacity()<<endl;
    
    v1.pop_back();
    print(v1);

    v1.push_back(12);
    print(v1);

    cout<<"First : "<<v1.front()<<endl<<"Last : "<<v1.back()<<endl;

    v1.erase(v1.begin()+2,v1.begin()+3);
    print(v1);

    cout<<"Size : "<<v1.size()<<endl;
    cout<<"Capacity : "<<v1.capacity()<<endl;

    vector<int> v2;
    for(int i=0;i<10;i++){
        v2.push_back(i*2);
    }
    cout<<"v2 : ";
    print(v2);
    v1.insert(v1.begin(),&v2[8],&v2[10]);
    cout<<"v1 : ";
    print(v1);
    v1.swap(v2);
    cout<<"After swap...."<<endl;
    cout<<"v2 : ";print(v2);
    cout<<"v1 : ";print(v1);
    return 0;
}
