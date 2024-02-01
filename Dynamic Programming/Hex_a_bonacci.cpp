#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 10000007

const int mx = 10100;
ll dp[mx];
int a, b, c, d, e, f, n;
ll fn(int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if(dp[n] != -1) return dp[n];
    return dp[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)) % MOD;
}
int main(){
    int t; cin >> t;
    int i = 1;
    while(t--){
        memset(dp, -1, sizeof(dp));
        cin >> a >> b >> c >> d >> e >> f >> n;
        cout << "Case " << i << ": " << fn(n) % MOD << "\n";
        i++;
    }
    return 0;
}