#include<bits/stdc++.h>

using namespace std;
#define ii pair<int,int>

const int INF = 1e9;

vector<int> dijkstra(vector<vector<pair<int,int>>>&adj,int nodes){
    priority_queue<ii,vector<ii>,greater<ii>>pq;
    vector<int>from_begin(nodes,INF);

    from_begin[1]=0;
    pq.push({0,1});

    while(!pq.empty()){
        int curr = pq.top().second;
        int dist = pq.top().first;
        pq.pop();

        if(dist > from_begin[curr])continue;

        for(auto x : adj[curr]){
            if(x.first + from_begin[curr] < from_begin[x.second]){
                from_begin[x.second] = x.first + from_begin[curr];
                pq.push({from_begin[x.second],x.second});
            }
        }
    }
    return from_begin;
}

int main(int argc, char const *argv[]){
    int nodes,edges;
    cin>>nodes>>edges;
    vector<vector<ii>>adj(nodes+1);
    for(int i=0 ; i<edges ; i++){
        int x,y,w;
        cin>>x>>y>>w;
        adj[x].push_back({w,y});
        adj[y].push_back({w,x});
    }
    vector<int>shortest_way = dijkstra(adj,nodes+1);
    for(int i=1 ; i<=nodes ; i++){
        cout<<i<<" : "<<shortest_way[i]<<endl;
        
    }
    return 0;
}
/*
6 7
1 2 2
1 3 3
2 4 7
3 4 1
3 5 6
4 6 4
5 6 7
*/