using namespace std;
#include <iostream>
#include <bits/stdc++.h>
using ll = long long int;
#define FOR(x, y) for (int x = 0; x < y; x++)
#define ii pair<int, int>
#define INF 1000000
int main()
{
  int n, m;
  cin >> n >> m;

  vector<vector<ii>> adj(n + 1);
  adj[0].push_back({0, 0});
  vector<vector<int>> path(1000000);

  FOR(i, m) {
    int x, y, w;
    cin >> x >> y >> w;
    x = x;
    y = y;
    adj[x].push_back(make_pair(w, y));
    adj[y].push_back(make_pair(w, x));
  }

  priority_queue<ii, vector<ii>, greater<ii>> pq;
  vector<int> distArr(n, INF);
  distArr[1] = 0;
  pq.push({0, 1});
  path[1].push_back(1);

  while(pq.empty() == false) {
    int curr = pq.top().second;
    int dist = pq.top().first;
    pq.pop();

    for(auto x : adj[curr]) {
      if(dist + x.first < distArr[x.second]) {
        vector<int> dummy;
        dummy = path[curr];
        dummy.push_back(x.second);
        path[x.second] = dummy;
        distArr[x.second] = x.first + dist;
        pq.push({distArr[x.second], x.second});
      }
      else if(dist + x.first == distArr[x.second]) {
        // cout << "here curr is " << curr << endl;
        // for(auto it : path[x.second]) {
        //   cout << it << " " << endl;
        // }
        // cout << "now curr " << curr << "is going to be compared with" << path[x.second][path[x.second].size() - 2] << endl; 
        if (curr < path[x.second][path[x.second].size() - 2]){
          vector<int> dummy;
          dummy = path[curr];
          dummy.push_back(x.second);
          path[x.second] = dummy;
        }
        // for(auto i : path[curr]) {
        //   cout << i << " ";
        // }
        // cout << endl;
        // for(auto i : path[x.second]) {
        //   cout << i << " ";
        // }
        // cout << "\n\n\n";
      }
    }
  }
  for(auto x : path[n]) {
    cout << x << " ";
  }
}