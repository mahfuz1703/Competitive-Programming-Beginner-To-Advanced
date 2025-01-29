#include <bits/stdc++.h>
using namespace std;

const int mx = 112;
bool vis[mx];
vector <int> adjList[mx];
bool cycle = false;

void isCycle(int node, int parent){
    vis[node] = 1;
    
    for(auto v : adjList[node]){
        if(vis[v] == 0){
            isCycle(v, node);
        }else if(v != parent){
            cycle = true;
            return;
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

    isCycle(1, 1); // node start from 1

    if(cycle){
        cout << "Yes\n";
    }else cout << "No\n";
}
