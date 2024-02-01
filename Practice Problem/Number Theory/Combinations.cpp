/// In the name of ALLAH
/// Problem - https://lightoj.com/problem/combinations

  /*----------------------------*/
 /*          Mahfuz            */
/*----------------------------*/

#include <bits/stdc++.h>
#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 1000003
#define all(a) (a).begin(),(a).end()
using namespace std;

inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

const int mx = 1e6 + 123;
ll fact[mx];
ll invFact[mx];
int main() {
    FASTER

    int lim = 1e6 + 123;
    fact[0] = 1; invFact[0] = 1;
    for(int i = 1; i <= lim; i++){
        fact[i] = modMul(fact[i-1], i);
        invFact[i] = modInverse(fact[i]);
    }

    int tt = 1;
    cin >> tt;
    int i = 1;
    while(tt--){
        int n, k; cin >> n >> k;
        ll ans = modMul(modMul(fact[n], invFact[n-k]), invFact[k]);
        cout << "Case " << i << ": " << ans << "\n";
        i++;
    }
    return 0;
}

/// Alhamdulilla for everything