#include <bits/stdc++.h>
using namespace std;

const int mx = 112;
bool vis[mx];
vector <int> adjList[mx];

void bfs(int node){
    vis[node] = 1;
    queue<int> q;
    q.push(node);

    while(!q.empty()){
        int current = q.front();
        cout << current << " ";
        q.pop();

        for(auto u : adjList[current]){
            if(vis[u] == 0){
                vis[u] = 1;
                q.push(u);
            }
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

    bfs(1);
}
