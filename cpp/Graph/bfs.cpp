#include<bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int>>graph,int startingNode);

int main(int argc, char const *argv[]){
    int nodes,edges;
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
    
    return 0;
}
void bfs(vector<vector<int>>graph,int startingNode){
    int size=graph.size();
    vector<bool>visited(size+1,false);
    queue<int>q;

    q.push(startingNode);

    while(!q.empty()){
        int curr=q.front();
        q.pop();
        if(!visited[curr]){
            visited[curr]=true;
            cout<<curr<<" ";
            //sort(graph[curr].begin(),graph[curr].end());
            for(auto neighbor : graph[curr]){
                if(!visited[neighbor]){
                    q.push(neighbor);
                }
            }
        }
    }
}
/*
8 7
1 2
1 3
2 6
3 5
3 4
4 7
7 8
*/