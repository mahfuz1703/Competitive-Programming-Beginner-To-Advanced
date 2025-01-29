#include <bits/stdc++.h>
using namespace std;

const int mx = 112;
int vis[mx];
vector <int> adjList[mx];
bool cycle = false;

void isCycle(int node, int parent){
    vis[node] = 1;
    
    for(auto v : adjList[node]){
        if(v != parent){
            if(vis[v] == 0){
                isCycle(v, node);
            }
            else if(vis[v] == 1){
                cycle = true;
                return;
            }
        }
    }
    vis[node] = -1;

}
int main(){
    int node, edge; cin >> node >> edge;

    for(int i = 1; i <= edge; i++){
        int x, y; cin >> x >> y;

        adjList[x].push_back(y);
        // adjList[y].push_back(x);
    }

    for(int i = 0; i <= node; i++){
        vis[i] = 0; // 0 means not visted, 1 means alive/visted, and -1 means dead
    }

    for(int i = 1; i <= node; i++){
        isCycle(i, -1);
    }

    if(cycle){
        cout << "Yes\n";
    }else cout << "No\n";
}
