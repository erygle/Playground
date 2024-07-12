#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>graph(n+1);
    //ilk sondan sonuncu nodea giden nodeları bul ve toplam kaç tane nodedan geçtiğini göster örnek 1 3 4 olan yolu kullanırsan 3 tane yoldan geçtin demektir
    for(int i=0 ; i<m ; i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    vector<int>ways(n+1,0);
    ways[1]=1;
    for(int i=1 ; i<=n ; i++){
        for(auto neighbor : graph[i]){
            ways[neighbor]+=ways[i];
        }
    }
    cout<<ways[n]<<endl;
    //sondan başlayarak yolları bul
    vector<int>path;
    path.push_back(n);
    int curr=n;
    while(curr!=1){
        for(auto neighbor : graph[curr]){
            if(ways[neighbor]==ways[curr]-1){
                path.push_back(neighbor);
                curr=neighbor;
                break;
            }
        }
    }
    reverse(path.begin(),path.end());
    for(auto node : path){
        cout<<node<<" ";
    }
    cout<<endl;
    
    return 0;
}
