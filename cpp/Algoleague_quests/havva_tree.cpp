
#include<bits/stdc++.h>

using namespace std;

const int n = 1e5;

vector<vector<int>>adj(n);

int calculate(int curr,int prev,int d){
    int temp = 0;
    bool child = true;

    for(auto x : adj[curr]){
        if(x == prev)continue;
        temp += calculate(x,curr,d+1);
        child = false;
    }

    if(child){
        temp += d*2;
    }
    return temp;
}


int main(int argc, char const *argv[]){
    int edges;
    cin>>edges;
    for(int i=0 ; i<edges-1 ; i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<calculate(1,0,0);
    return 0;
}











/*#include<bits/stdc++.h>

using namespace std;

const int n = 1e5;

vector<bool>parent(n,true);

int f(vector<vector<int>>adj,int s,int d){
    int temp=0;
    parent[s]=true;
    for(auto curr : adj[s]){
        if(parent[s])continue;
        temp += f(adj,curr,d+1);
        parent[curr]=false;
    }
    if(parent[s])temp += d*2;
    return temp;
}

int main(int argc, char const *argv[]){
    int edges;
    cin>>edges;
    vector<vector<int>>adj(n);
    for(int i=0 ; i<edges-1 ; i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ans = f(adj,1,0);
    cout<<ans;
    return 0;
}
*/