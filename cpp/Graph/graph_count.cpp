#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n, m;
    cin >> n >> m;
    vector< vector<int> > adj(n+1);
    vector< vector<int> > adj_temp(n+1);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    vector<bool> visited(n+1, false);
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if (!visited[i]) {
            queue<int> bfs;
            bfs.push(i);
            while (!bfs.empty()) {
                int curr = bfs.front();
                bfs.pop();
                if (visited[curr]) continue;
                visited[curr] = true;
                for (auto x: adj[curr]) {
                    bfs.push(x); 
                }
            }
            cout<<i<<endl;
            ans++;
        }
    }
    cout << ans << endl;
}