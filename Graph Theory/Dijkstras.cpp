#include <bits/stdc++.h>
using namespace std;

const int mx = 112;
vector <pair<int, int>> adjList[mx];
int current_sum = 0;
int distance[10001];

void dijkstras(int node){
    distance[node] = 0;

    multiset<pair<int, int> q;
    q.insert({0, node});

    while(q.size()){
        int current = q.begin().second;
        // cout << current << " ";
        q.erase(q.begin());

        for(auto u : adjList[current]){
            if(distance[u.fist] > distance[node] + u.second){
                distance[u.fist] = distance[node] + u.second
                q.insert({distance[u.first], u.first});
            }
        }
    }

}
int main(){
    int node, edge; cin >> node >> edge;

    for(int i = 1; i <= edge; i++){
        int x, y, w; cin >> x >> y >> w;

        adjList[x].push_back({y, w});
        adjList[y].push_back({x, w});
    }

    dijkstras(1);
    for(int i = 1; i <= node; i++){
        cout << i << " --> " << distance[i] << "\n";
    }
}
