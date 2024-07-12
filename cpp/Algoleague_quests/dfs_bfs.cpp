#include<bits/stdc++.h>

using namespace std;
void dfs(vector<vector<int>>&graph,int beginNode){
    stack<int>st;
    vector<bool>visited(graph.size()+1,false);
    st.push(beginNode);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        if(!visited[curr]){
            cout<<curr<<" ";
            visited[curr]=true;
            sort(graph[curr].begin(),graph[curr].end());
            for(auto neighbor : graph[curr]){
                if(!visited[neighbor]){
                    st.push(neighbor);
                }
            }
        }
    }
}
void bfs(vector<vector<int>>&graph,int beginNode){
    queue<int>q;
    vector<bool>visited(graph.size()+1,false);
    q.push(beginNode);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        if(!visited[curr]){
            cout<<curr<<" ";
            visited[curr]=true;
            sort(graph[curr].begin(),graph[curr].end());
            for(auto neighbor : graph[curr]){
                if(!visited[neighbor]){
                    q.push(neighbor);
                }
            }
        }
    }
}
int main(){
    int edges,nodes;
    cin>>nodes>>edges;
    vector<vector<int>>arr(nodes+1);
    for(int i=0 ; i<edges ; i++){
        int x,y;
        cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    for(int i=1 ; i<=nodes ; i++){
        cout<<i<<" : ";
        bfs(arr,i);
        cout<<endl;
    }
    cout<<"------------------"<<endl;   
    for(int i=1 ; i<=nodes ; i++){
        cout<<i<<" : ";
        dfs(arr,i);
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