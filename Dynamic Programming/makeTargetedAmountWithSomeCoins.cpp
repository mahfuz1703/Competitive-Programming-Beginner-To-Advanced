#include <bits/stdc++.h>
using namespace std;

int n, m;
int coins[100];
int dp[10000];

bool isPossible(int n){ // time complexity: O(n)
    if(n < 0) return 0;
    if(n == 0) return 1;

    if(dp[n] != -1) return dp[n];

    int res = 0;
    for(int i = 0; i < m; i++){ // time complexity: O(m)
        if(isPossible(n - coins[i])) res = 1;
    }

    return dp[n] = res;
}
// time complexity: O(n * m)

int main(){
    memset(dp, -1, sizeof dp);
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        cin >> coins[i];
    }

    cout << isPossible(n) << "\n";
    return 0;
}