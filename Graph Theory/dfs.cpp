#include <bits/stdc++.h>
using namespace std;

const int mx = 112;
bool vis[mx];
vector <int> adjList[mx];

void dfs(int node){
    vis[node] = 1;
    for(auto v : adjList[node]){
        if(vis[v] == 0){
            dfs(v);
        }
    }

}
int main(){
    int node, edge; cin >> node >> edge;

    for(int i = 1; i <= edge; i++){
        int x, y; cin >> x >> y;

        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    // for(int i = 1; i <= node; i++){
    //     cout << "Node " << i << ": ";
    //     for(auto u : adjList[i]){
    //         cout << u << " ";
    //     }
    //     cout << "\n";
    // }

    int component = 0;
    for(int i = 1; i <= node; i++){
        if(vis[i] == 0){
            dfs(i);
            component++; // count total component/disconnected graph
        }
    }
    // cout << component << "\n";

    // check tree or not (easy way)
    if(component == 1 and (node-1 == edge)){
        cout << "Tree\n";
    }else cout << "Not Tree\n";
}
