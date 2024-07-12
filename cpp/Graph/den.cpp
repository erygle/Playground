#include<bits/stdc++.h>

using namespace std;
void dfs(vector<vector<int>>&adj,int first){
    stack<int>st;
    int n = adj.size();
    vector<bool>visited(n+1,false);
    st.push(first);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        if(visited[curr])continue;
        sort(adj[curr].begin(),adj[curr].end());
        cout<<curr<<" ";
        visited[curr] = true;
        for(auto k : adj[curr]){
            if(!visited[k]){
                st.push(k);
            }
        }
    }
}
void bfs(vector<vector<int>>&adj,int first){
    int n = adj.size();
    vector<bool>visited(n+1,false);
    queue<int>q;
    q.push(first);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        if(visited[curr])continue;
        cout<<curr<<" ";
        visited[curr]=true;
        sort(adj[curr].begin(),adj[curr].end());
        for(auto k : adj[curr]){
            if(!visited[k]){
                q.push(k);
            }
        }
    }
}
int main(int argc, char const *argv[]){
    int edges,nodes;
    cin>>nodes>>edges;
    vector<vector<int>>adj(nodes+1);
    for(int i=0 ; i<edges ; i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    /*for(int i=1 ; i<nodes+1 ; i++){
        cout<<i<<" : ";
        for(auto k : adj[i]){
            cout<<k<<" ";
        }
        cout<<"\n";
    }*/
    dfs(adj,1);
    cout<<"\n";
    bfs(adj,1);
    return 0;
}
