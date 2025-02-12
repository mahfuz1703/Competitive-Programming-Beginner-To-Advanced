// problem: https://lightoj.com/problem/farthest-nodes-in-a-tree

#include <bits/stdc++.h>
using namespace std;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 30009;
bool vis[mx];
vector <pair<int, int>> adjList[mx];
long long mxw;
int last;
void dfs(int node, long long cnt){
    vis[node] = 1;
    if(cnt > mxw){
        mxw = cnt;
        last = node;
    }
    for(auto v : adjList[node]){
        int x = v.first;
        int y = v.second;
        if(vis[x] == 0){
            dfs(x, cnt + y);
        }
    }
}

void solve(){
    int node, edge; cin >> node >> edge;

    vector <pair<int, int>> tmp[mx];
    swap(tmp, adjList);

    for(int i = 1; i <= edge; i++){
        int x, y, w; cin >> x >> y >> w;

        adjList[x].push_back({y, w});
        adjList[y].push_back({x, w});
    }

    int source, destination; cin >> source >> destination;

    mxw = INT_MIN;
    memset(vis, 0, sizeof(vis));
    dfs(source, 0);

    int mx1 = mxw;

    mxw = INT_MIN;
    memset(vis, 0, sizeof(vis));
    dfs(last, 0);

    cout << mxw << "\n";
}

int main(){
    FASTER

    int tt = 1;
    cin >> tt;
    int i = 1;
    while(tt--){
        cout << "Case " << i << ": ";
        solve();
        i++;
    }
}
