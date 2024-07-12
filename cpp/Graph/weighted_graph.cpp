#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void findDistance(vector<vector<pair<int,int>>>,int node,)

int main(int argc, char const *argv[]){
    
    int nodes,edges;
    cin>>nodes>>edges;
    vector<vector<pair<int,int>>>graph(nodes+1);

    for(int i=0 ; i<edges ; i++){
        int x,y,w;
        cin>>x>>y>>w;
        graph[x].push_back({y,w});
        graph[y].push_back({x,w});
    }
    for(int i=1 ; i<=nodes ; i++){
        cout<< "Node "<<i<<" : ";
        for(auto &k : graph[i]){
            int v = k.first;
            int weight = k.second;
            cout<<"( "<<v<<" , "<<weight<<" )";
        }cout<<endl;
    }
    return 0;
}

/*
7 10
1 2 3
1 3 5
2 4 4
2 5 6
3 4 6
3 6 3
4 6 2
4 7 9
5 7 7
6 7 5
*/