#include <bits/stdc++.h>
using namespace std;

const int mx = 112;
int colored[mx];
vector <int> adjList[mx];
bool coloring_possible;

void dfs(int node, int color){
    colored[node] = color;
    if(coloring_possible == false){
        return;
    }
    for(auto v : adjList[node]){
        if(colored[v] == 0){
            // 1 means red color and -1 means yellow color
            int next_color;
            if(color == 1){
                next_color = -1;
            }else next_color = 1;

            dfs(v, next_color);
        }else if(colored[v] == color){
            coloring_possible = false;
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

    for(int i = 1; i <= node; i++){
        colored[i] = 0;
    }
    coloring_possible = true;

    dfs(1, 1);

    if(coloring_possible){
        cout << "Possible\n";
    }else cout << "Impossible\n";
}
