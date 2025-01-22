// problem: https://codeforces.com/contest/115/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n; cin >> n;
    int arr[n+1];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    int ans = 0, node = 0, cnt = 1;
    for(int i = 1; i <= n; i++){
        node = arr[i];
        cnt = 1;
        while(node != -1){
            node = arr[node];
            cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << "\n";
}

int main(){
    FASTER

    int tt = 1;
    // cin >> tt;
    // int i = 1;
    while(tt--){
        // cout << "Case " << i << ": ";
        solve();
        // i++;
    }
}

