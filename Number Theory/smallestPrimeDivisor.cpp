/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

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

ll smallestPrimeDivisor(ll n){
    if(n % 2 == 0) return 2;

    for(ll i = 3; i*i <= n; i += 2){
        if(n % i == 0){
            return i;
        }
    }
    return n;
}
void solve(){
    ll n; cin >> n;
    cout << smallestPrimeDivisor(n) << "\n";
}
int main(){
    FASTER

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

/// Alhamdulilla for everything