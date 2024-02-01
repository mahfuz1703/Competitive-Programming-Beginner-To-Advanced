/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah
// CSES

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define pb push_back
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define MOD 1000000007
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << "\n"

void solve(){
    ll a, b, c; cin >> a >> b >> c;
    ll ans = 1;
    while(c > 0){
        if(c % 2 == 1){
            ans *= b;
            ans %= MOD;
        }
        c /= 2;
        b *= b;
        b %= MOD;
    }
    ll ans2 = 1;
    while(ans > 0){
        if(ans % 2 == 1){
            ans2 *= a;
            ans2 %= MOD;
        }
        ans /= 2;
        a *= a;
        a %= MOD;
    }
    print(ans2);
}
int main(){
    FASTER

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

/// Alhamdulilla for everything