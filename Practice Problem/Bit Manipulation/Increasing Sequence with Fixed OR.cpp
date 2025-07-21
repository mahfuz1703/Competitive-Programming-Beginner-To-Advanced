#include <bits/stdc++.h>
using namespace std;

// Problem - https://codeforces.com/contest/1988/problem/C

#define ll long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll set_kTH_bit_off(ll n,  ll k){
    return (~(1 << k)) & n;
}

ll check_kTH_Bit(ll n, ll k){
    return (n >> k) & 1;
}

void solve(){
    ll n; cin >> n;

    set<ll> ans;
    ans.insert(n);
    for(int k = 0; k < 64; k++){
        if(check_kTH_Bit(n, k)){
            ll tmp = (n - (1LL << k));
            if(tmp > 0){
                ans.insert(tmp);
            }
        }
    }

    cout << ans.size() << "\n";
    for(auto u : ans){
        cout << u << " ";
    }
    cout << "\n";
}

int main(){
    FASTER
    int tt = 1; 
    cin >> tt;

    while(tt--){
        solve();
    }
}
