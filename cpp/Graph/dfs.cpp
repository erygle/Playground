#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>>&graph , int beginNode){
    int size=graph.size();
    vector<bool>visited(size+1,false);
    stack<int>st;
    
    st.push(beginNode);

    while(!st.empty()){
        int curr = st.top();
        st.pop();
        if(!visited[curr]){
            visited[curr]=true;
            cout<<curr<<" ";
            sort(graph[curr].begin(),graph[curr].end());
            for(int neighbor : graph[curr]){
                if(!visited[neighbor]){
                    st.push(neighbor);
                }
            }
        }
    }
}
/*void dfs(vector<vector<int>>& graph, int startNode) {
    int n = graph.size();
    vector<bool> visited(n, false); // Ziyaret edilen düğümleri takip etmek için kullanılan boolean vektör
    stack<int> stk; // DFS için kullanılan stack veri yapısı

    stk.push(startNode); // Başlangıç düğümünü stack'e ekleyerek DFS'yi başlatıyoruz

    while (!stk.empty()) {
        int currentNode = stk.top();
        stk.pop();

        if (!visited[currentNode]) {
            visited[currentNode] = true;
            cout << currentNode << " ";

            // Komşu düğümleri stack'e ekliyoruz (sırasıyla ziyaret edilecek)
            for (int neighbor : graph[currentNode]) {
                if (!visited[neighbor]) {
                    stk.push(neighbor);
                }
            }
        }
    }
}*/

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
    /*int init;
    cin>>init;
    dfs(arr,init);*/
    for(int i=1 ; i<=nodes ; i++){
        cout<<i<<" : ";
        dfs(arr,i);
        cout<<endl;
    }

    return 0;
}

/*#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void dfs(vector<vector<int>>& graph, int startNode) {
    int n = graph.size();
    vector<bool> visited(n, false); // Ziyaret edilen düğümleri takip etmek için kullanılan boolean vektör
    stack<int> stk; // DFS için kullanılan stack veri yapısı

    stk.push(startNode); // Başlangıç düğümünü stack'e ekleyerek DFS'yi başlatıyoruz

    while (!stk.empty()) {
        int currentNode = stk.top();
        stk.pop();

        if (!visited[currentNode]) {
            visited[currentNode] = true;
            cout << currentNode << " ";

            // Komşu düğümleri stack'e ekliyoruz (sırasıyla ziyaret edilecek)
            for (int neighbor : graph[currentNode]) {
                if (!visited[neighbor]) {
                    stk.push(neighbor);
                }
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Dugum sayisini girin: ";
    cin >> n;
    cout << "Kenar sayisini girin: ";
    cin >> m;

    vector<vector<int>> graph(n+1);

    cout << "Kenar bilgilerini girin:\n";
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // Eğer yönlü graf ise bu satırı atlayabilirsiniz
    }

    int startNode;
    cout << "DFS'yi baslatacak dugumu girin: ";
    cin >> startNode;

    cout << "DFS Traversal: ";
    dfs(graph, startNode);

    return 0;
}*/
