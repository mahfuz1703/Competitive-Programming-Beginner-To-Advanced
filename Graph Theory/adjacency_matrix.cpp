#include <bits/stdc++.h>
using namespace std;

const int mx = 1e3 + 123;
int adjMat[mx][mx];

int main(){
    int n; cin >> n;

    /// Take input in adjMat
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> adjMat[i][j];
    }

    /// Get output of adjMat
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cout << adjMat[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";

    return 0;
}