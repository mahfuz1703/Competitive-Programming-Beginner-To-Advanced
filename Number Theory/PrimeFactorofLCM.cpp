#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mx = 1e7+123;
bitset <mx> isPrime;
vector <int> prime;
void primeGenerate(int n){
    isPrime[1] = 0;
    for(int i = 3; i <= n; i += 2) isPrime[i] = 1;

    int sq = sqrt(n);
    for(int i = 3; i <= sq; i += 2){
        if(isPrime[i] == 1){
            for(int j = i*i; j <= n; j += (i+i)){
                isPrime[j] = 0;
            }
        }
    }

    isPrime[2] = 1;
    prime.push_back(2);
    for(int i = 3; i <= n; i += 2){
        if(isPrime[i] == 1) prime.push_back(i);
    }
}

vector< ll > primeFactorization(ll  n){
    vector <ll> rest;
    for(auto p : prime){
        if(1LL * p * p > n) break;

        if(n % p == 0){
            while(n % p == 0){
                rest.push_back(p);
                n /= p;
            }
        }
    }
    if(n > 1) rest.push_back(n);

    return rest;
}

int main(){
    primeGenerate(mx);

    int t; cin >> t;
    int i = 1;
    while(t--){
        int n; cin >> n;
        set <ll> ans;
        for(int j = 0; j < n; j++){
            vector <ll> v;
            ll x; cin >> x;
            v = primeFactorization(x);
            for(auto u : v) ans.insert(u);
        }
        cout << "Case #" << i << ": " << ans.size() << "\n";
        for(auto u : ans) cout << u << "\n";

        i++;
    }
    return 0;
}
// Complexity - O(n);