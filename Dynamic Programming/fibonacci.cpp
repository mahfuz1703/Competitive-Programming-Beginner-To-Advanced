#include <bits/stdc++.h>
using namespace std;

int dp[1000];
int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(dp[n] != -1) return dp[n];

    return dp[n] = (fib(n-1) + fib(n-2));
}
int main(){
    int n; cin >> n;

    for(int i = 0; i <= 1000; i++) dp[i] = -1;
    int ans = fib(n);
    cout << ans << "\n";
    return 0;
}