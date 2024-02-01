#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 123;
vector < pair<int,int> > adjList[mx];

int main(){
    int n, m; cin >> n >> m;
    
    for(int i = 1; i <= m; i++){
        int u, v, w; cin >> u >> v >> w;
        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w}); /// Remove this line for undirected graph
    }
    
    /// Print adjacent nodes of a node
    for(int i = 1; i <= n; i++){
        cout << "Adjacent nodes of node " << i << ": ";
        for(auto u : adjList[i]) cout << "Node: " << u.first << " Weight: " << u.second << "\n";
    }
    cout << "\n";

    return 0;
}