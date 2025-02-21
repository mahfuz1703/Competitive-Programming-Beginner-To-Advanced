// problem: https://leetcode.com/problems/coin-change/description/

#include <bits/stdc++.h>
using namespace std;

int n, m;
int coins[100];
int dp[10000];
int mn = 1e9 + 123;

bool isPossible(int n, int cnt){ // time complexity: O(n)
    if(n < 0) return 0;
    if(n == 0) {
        mn = min(mn, cnt);
        return 1;
    }

    if(dp[n] != -1) {
        mn = min(mn, cnt);
        return dp[n];
    }

    int res = 0;
    cnt++;
    for(int i = 0; i < m; i++){ // time complexity: O(m)
        if(isPossible(n - coins[i], cnt)){ 
            res = 1;
        }
    }
    mn = min(mn, cnt);
    return dp[n] = res;
}
// time complexity: O(n * m)

int main(){
    memset(dp, -1, sizeof dp);
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        cin >> coins[i];
    }

    // cout << isPossible(n, 0) << "\n";

    if(n == 0){
        cout << 0 << "\n";
    }
    else if(isPossible(n, 0)){
        cout << mn  << "\n";
    }else{
        cout << -1 << "\n";
    }
    return 0;
}