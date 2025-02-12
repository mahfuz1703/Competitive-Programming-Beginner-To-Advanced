// problem: https://lightoj.com/problem/guilty-prince

#include <bits/stdc++.h>
using namespace std;

const int mx = 112;
int vis[mx][mx];
char graph[mx][mx];
int m, n;
int ans = 0;
int fx[] = {0, 0, 1, -1};
int fy[] = {1, -1, 0, 0};

void dfs(int x, int y){
    if(x >= 0 and x < m and y >= 0 and y < n){
        if(vis[x][y] or graph[x][y] == '#'){
            return;
        }else{
            ans++;
            vis[x][y] = 1;

            for(int i = 0; i < 4; i++){
                dfs(x + fx[i], y + fy[i]);
            }

            // dfs(x, y+1);
            // dfs(x, y-1);
            // dfs(x+1, y);
            // dfs(x-1, y);
        }
    }else{
        return;
    }
}
int main(){
    int tt; cin >> tt;
    int casee = 1;

    while(tt--){
        cin >> n >> m;
        int startX, startY;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> graph[i][j];

                if(graph[i][j] == '@'){
                    startX = i;
                    startY = j;
                }
            }
        }

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                vis[i][j] = 0;
            }
        }
        ans = 0;

        dfs(startX, startY);
        cout << "Case " << casee << ": " << ans << "\n";
        casee++;
    }
}
