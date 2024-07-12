#include<bits/stdc++.h>
#include<vector>

using namespace std;

bool ascendingCompare(int a,int b);
bool descendingCompare(int a,int b);
void ascendingSort(vector<int>&vectorList);
void descendingSort(vector<int>&vectorList);
void printList(vector<int> &vectorList);
void customSort(vector<int>&vectorList,bool (*funcPtr)(int,int));


int main(int argc, char const *argv[]){
    vector<int> vectorList = {6,50,85,3,26};
    /*ascendingSort(vectorList);
    printList(vectorList);
    descendingSort(vectorList);
    printList(vectorList);*/
    customSort(vectorList,descendingCompare);
    printList(vectorList);
    return 0;
}

bool ascendingCompare(int a,int b){
    return a<b;
}
bool descendingCompare(int a,int b){
    return a>b;
}
void ascendingSort(vector<int>&vectorList){// 6 50 85 3 26
    for(int startIndex=0 ; startIndex<vectorList.size() ; startIndex++){
        int bestIndex = startIndex;
        for(int currentIndex = startIndex+1 ; currentIndex<vectorList.size() ; currentIndex++){
            if(ascendingCompare(vectorList[currentIndex],vectorList[bestIndex])){
                bestIndex = currentIndex;
            }
        }swap(vectorList[startIndex],vectorList[bestIndex]);
    }
}
void descendingSort(vector<int>&vectorList){// 6 50 85 3 26
    for(int startIndex=0 ; startIndex<vectorList.size() ; startIndex++){
        int bestIndex = startIndex;
        for(int currentIndex = startIndex+1 ; currentIndex<vectorList.size() ; currentIndex++){
            if(descendingCompare(vectorList[currentIndex],vectorList[bestIndex])){
                bestIndex = currentIndex;
            }
        }swap(vectorList[startIndex],vectorList[bestIndex]);
    }
}
void printList(vector<int> &vectorList){
    for(int startIndex=0; startIndex<vectorList.size(); startIndex++){
        cout<<vectorList[startIndex]<<" ";
    }
}
void customSort(vector<int>&vectorList,bool (*funcPtr)(int,int)){
    for(int startIndex=0 ; startIndex<vectorList.size() ; startIndex++){
        int bestIndex = startIndex;
        for(int currentIndex = startIndex+1 ; currentIndex<vectorList.size() ; currentIndex++){
            if(funcPtr(vectorList[currentIndex],vectorList[bestIndex])){
                bestIndex = currentIndex;
            }
        }swap(vectorList[startIndex],vectorList[bestIndex]);
    }

}