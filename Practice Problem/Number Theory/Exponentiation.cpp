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
    ll a, b; cin >> a >> b;
    ll ans = 1;
    while(b > 0){
        if(b % 2 == 1){
            ans *= a;
            ans %= MOD;
        }
        b /= 2;
        a *= a;
        a %= MOD;
    }
    print(ans);
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