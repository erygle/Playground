#include <iostream>
#include <vector>
#include <set>
#include <utility>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n>>m;

    vector<pair<int, int>> edges;

    for (int i = 0; i < m; i++) {
        int start, end;
        cin >> start >> end;
        edges.push_back(make_pair(start, end));
    }

    set<pair<int,int>> nodes;
    
    int bidirectionalNodeCount = 0;
    vector<pair<int,int>>copy_arr;
    for (auto edge : edges) {
        pair<int, int> reverseEdge = make_pair(edge.second, edge.first);

        if (find(edges.begin(), edges.end(), reverseEdge) != edges.end()) {
            edges.erase(remove(edges.begin(),edges.end(),reverseEdge),edges.end());
            bidirectionalNodeCount++;
            copy_arr.push_back(make_pair (edge.first,edge.second));
            nodes.insert(make_pair(edge.first,edge.second));
        }
    }

    cout << bidirectionalNodeCount << endl;
    for(auto k : nodes)cout<<k.first<<" "<<k.second<<endl;
    return 0;
}
