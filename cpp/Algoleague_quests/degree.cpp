#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>g(n+1);
    for(int i=0 ; i<m ; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
    }
    int counter=0;
    vector<bool> visited(n, false);
    for(int i=0 ; i<n ; i++){
        if(!visited[i]){
            queue<int>bfs;
            bfs.push(i);
            while(!bfs.empty()){
                int cur = bfs.front();
                bfs.pop();
                if(visited[cur]){
                    counter++;
                    continue;
                }
                visited[cur]=true;
                for(auto k:g[cur])bfs.push(k);
            }
        }
    }
    cout<<counter;
    return 0;
}
