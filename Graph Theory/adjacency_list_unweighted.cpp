#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 123;
vector <int> adjList[mx];

int main(){
    int n, m; cin >> n >> m;

    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u); /// Remove this line for weighted graph
    }
    
    /// Print adjacent nodes of a node
    for(int i = 1; i <= n; i++){
        cout << "Adjacent nodes of node " << i << ": ";
        for(auto u : adjList[i]) cout << u << " ";
        cout << "\n";
    }
    cout << "\n";

    return 0;
}