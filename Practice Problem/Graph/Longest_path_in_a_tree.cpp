// problem: https://www.spoj.com/problems/PT07Z/
 
#include <bits/stdc++.h>
using namespace std;
 
const int mx = 10009;
bool vis[mx];
vector <int> adjList[mx];
int mxi = 0, last = 0;
 
void dfs(int node, int cnt){
    vis[node] = 1;
    if(cnt > mxi){
        mxi = cnt;
        last = node;
    }
    for(auto v : adjList[node]){
        if(vis[v] == 0){
            dfs(v, cnt + 1);
        }
    }
 
}
int main(){
    int node; cin >> node;
    int edge = node - 1;
 
    for(int i = 1; i <= edge; i++){
        int x, y; cin >> x >> y;
 
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
 
    dfs(1, 0);
    memset(vis,0,mx);
    dfs(last, 0);
 
    cout << mxi << "\n";
}