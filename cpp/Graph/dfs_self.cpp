#include<bits/stdc++.h>

using namespace std;
void dfs(vector<vector<int>>graph,int startingNode){
    int size = graph.size();
    vector<bool>visited(size+1,false);
    stack<int>st;

    st.push(startingNode);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        if(!visited[curr]){
            visited[curr]=true;
            cout<<curr<<" ";
            sort(graph[curr].begin(),graph[curr].end());
            for(auto neighbor : graph[curr]){
                if(!visited[neighbor]){
                    st.push(neighbor);
                }
            }
        }
    }
}

int main(int argc, char const *argv[]){
    int node,edges;
    cin>>node>>edges;
    vector<vector<int>>adj(node+1);

    for(int i=0 ; i<edges ; i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for(int i=1 ; i<=node ; i++){
        cout<<i<<" : ";
        dfs(adj,i);
        cout<<endl;
    }
    return 0;
}
/*
6 9
1 2
1 4
1 5
2 4
2 5
3 5
3 6
4 6
6 2
*/