#include <bits/stdc++.h>
using namespace std;

const int mx = 1e3 + 123;
int adjMat[mx][mx];

int main(){
    int n, m; cin >> n >> m;

    /// Take input in adjMat
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) cin >> adjMat[i][j];
    }
    /// adjMat[i][j] means there is a edge between i and j node.


    /// Get output of adjMat
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) cout << adjMat[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";

    return 0;
}