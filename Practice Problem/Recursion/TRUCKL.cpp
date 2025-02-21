// problem: https://www.spoj.com/problems/TRUCKL/en/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll cnt = 0;
map<ll, ll> vis, val;
ll oky(ll a, ll b){
    if(a <= 0) return 0;

    if(a <= b) {
        cnt++;
        vis[a] = 1;
        val[a] = cnt;
        return 0;
    }


    if(vis[a] == 1){
        cnt += val[a];
        return 0;
    }

    if(vis[a] == 1){
        cnt += val[a];
        return  0;
    }

    ll x = a / 2;
    ll y = a - x;

    oky(x, b);
    oky(y, b);
    return 0;
}

void solve(){
    ll a, b;

    while(cin >> a >> b){
        vis.clear(); val.clear();
        cnt = 0;
        oky(a, b);
        cout << cnt << "\n";
    }
}
int main() {
    FASTER

    int tt = 1;
    // cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}