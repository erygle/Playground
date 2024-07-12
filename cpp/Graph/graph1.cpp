#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    /*int size,edges;
    cin>>size>>edges;
    vector<vector<int>>grap(size);
    for(int i=1 ; i<edges+1 ; i++){
        int x,y;
        cin>>x>>y;
        grap[x].push_back(y);
    }
    //for(int i=1 ; i<n ; i++){}
    cout<<grap[1].size();*/
    int n,m;
    cin>>n>>m;
    vector<vector<int>>g(n+1);
    for(int i=0 ; i<m ; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=0 ; i<n+1 ; i++){
        cout<<i<<" : ";
        for(int j=0 ; j<g[i].size() ; j++){
            cout<<g[i][j]<<" ";
        }cout<<endl;
    }
    

    return 0;
}
