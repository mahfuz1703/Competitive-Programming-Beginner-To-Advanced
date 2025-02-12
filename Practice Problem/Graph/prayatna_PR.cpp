// problem: https://www.spoj.com/problems/CAM5/

#include <bits/stdc++.h>
using namespace std;

const int mx = 100009;
bool vis[mx];
vector <int> adjList[mx];

void dfs(int node){
    if(vis[node]) return;

    vis[node] = 1;
    for(auto v : adjList[node]){
        if(vis[v] == 0){
            dfs(v);
        }
    }

}
int main(){
    int tt; cin >> tt;
    while(tt--){
        int node, edge; cin >> node >> edge;


        if(edge == 0){
            cout << node << "\n";
        }else{

            for(int i = 0; i < mx; i++){
                vis[i] = 0;
            }

            for(int i=0;i<node;i++){
               adjList[i].clear();
            }

            for(int i = 0; i < edge; i++){
                int x, y; cin >> x >> y;

                adjList[x].push_back(y);
                adjList[y].push_back(x);
            }

            int component = 0;
            for(int i = 0; i < node; i++){
                if(vis[i] == 0){
                    dfs(i);
                    component++; // count total component/disconnected graph
                }
            }

            cout << component << "\n";
        }
    }
}
