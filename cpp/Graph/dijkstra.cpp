#include<bits/stdc++.h>

using namespace std;

#define ii pair<int,int>
const int INF =  1e9;

vector<int> dijkstra(vector<vector<pair<int,int>>>&adj, int nodes){
    vector<int> from_begin(nodes,INF);

    priority_queue<ii, vector<ii>, greater<ii>>pq;
    from_begin[3]=0;
    pq.push({0,3});

    while(!pq.empty()){
        int curr = pq.top().second;
        int dist = pq.top().first;
        pq.pop();

        if(dist > from_begin[curr]) continue;
        for(auto x : adj[curr]){
            if(from_begin[curr] + x.first < from_begin[x.second]){
                from_begin[x.second] = from_begin[curr] + x.first;
                pq.push({from_begin[x.second],x.second});
            }
        }
    }

    return from_begin;
    //vector from_end(nodes,INF);
    //from_end[nodes-1]=0;
    /*pq.push({0, nodes-1});
    while(!pq.empty()){
        int curr = pq.top().second;
        int dist = pq.top().first;
        pq.pop();

        if(dist > from_end[curr]) continue;
        for(auto x : adj[curr]){
            if(from_end[curr] + x.first < from_end[x.second]){
                from_end[x.second] = from_end[curr] + x.first;
                pq.push({from_end[x.second],x.second});
            }
        }
    }

    int ans = INF;
    for(int i=1 ; i<=nodes ; i++){
        for(auto x : adj[i]){
            int node_1 = i;
            int node_2 = x.second;
            int weight = x.first;
            ans = std::min(ans, from_begin[node_1] + from_end[node_2] + weight / 2);
        }
    }
    return ans;*/
}

int main(int argc, char const *argv[]){
    int nodes,edges;
    cin>>nodes>>edges;
    vector<vector<pair<int,int>>>adj(nodes+1);
    for(int i=0 ; i<edges ; i++){
        int x,y,w;
        cin>>x>>y>>w;
        adj[x].push_back({w,y});
        adj[y].push_back({w,x});
    }
    vector<int> shortest_path = dijkstra(adj,nodes+1);
    for(int i=1 ; i<=nodes ; i++)cout<<i<<" : "<<shortest_path[i]<<endl;
    return 0;
}
