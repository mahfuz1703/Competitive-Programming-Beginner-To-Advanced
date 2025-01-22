// problem: https://www.spoj.com/problems/BUGLIFE/en/

#include <bits/stdc++.h>
using namespace std;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector <int> colored;
vector< vector<int> > adjList;
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
    FASTER

    int tt = 1;
    cin >> tt;
    int k = 1;
    while(tt--){
        int node, edge; cin >> node >> edge;

        adjList.clear() ;
        adjList.resize(node+1);
        colored.assign(node+1, 0);

        for(int i = 1; i <= edge; i++){
            int x, y; cin >> x >> y;

            adjList[x].push_back(y);
            adjList[y].push_back(x);
        }

        coloring_possible = true;

        for(int i = 1; i <= node; i++){
            if(colored[i] == 0){
                dfs(i, 1);
            }
        }

        cout << "Scenario #" << k << ":\n";
        if(coloring_possible){
            cout << "No suspicious bugs found!\n";
        }else cout << "Suspicious bugs found!\n";
        k++;
    }
}
