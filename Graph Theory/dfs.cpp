#include <bits/stdc++.h>
using namespace std;

const int mx = 112;
bool vis[mx];
vector <int> adjList[mx];

void dfs(int u){
    vis[u] = 1;
    for(auto v : adjList[u]){
        if(vis[v] == 0){
            dfs(v);
        }
    }

}
int main(){
    adjList[1].push_back(2);
    adjList[2].push_back(1);

    adjList[2].push_back(3);
    adjList[3].push_back(2);

    adjList[3].push_back(4);
    adjList[4].push_back(3);
}
