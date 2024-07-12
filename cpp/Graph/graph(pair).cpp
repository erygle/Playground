#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    int size,edges;
    cin>>size>>edges;
    vector<pair<int,int>>arr(size);

    for(int i=1 ; i<=edges ; i++){
        int x,y;
        cin>>x>>y;
        arr.push_back(make_pair(x,y));
        //arr.push_back({x,y});
        //arr.push_back({y,x});
    }
    for(const auto &p : arr){
            if(!p.first)continue;
            cout<<p.first<<" "<<p.second<<endl;
        }
    
    return 0;
}
/*int main() {
    int size, edges;
    std::cin >> size >> edges;

    std::vector<std::pair<int, int>> arr(size + 1);

    for (int i = 0; i < edges; i++) {
        int x, y;
        std::cin >> x >> y;
        arr[x].push_back({x, y});
        arr[y].push_back({y, x});
    }

    for (int i = 1; i <= size; i++) {
        std::cout << i << " : ";
        for (const auto& p : arr[i]) {
            std::cout << "(" << p.first << "," << p.second << ") ";
        }
        std::cout << std::endl;
    }

    return 0;
}*/