// problem: https://lightoj.com/problem/trailing-zeroes-i

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1e6+123;
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

int NOD(ll  n){
    int rest = 1;
    for(auto p : prime){
        if(1LL * p * p > n) break;

        if(n % p == 0){
            int cnt = 1;
            while(n % p == 0){
                n /= p;
                cnt++;
            }
            rest *= cnt;
        }
    }
    if(n > 1) rest *= 2;

    return rest;
}

void solve(){
    ll n; cin >> n;
    cout << NOD(n) - 1 << "\n";
}

int main(){
    FASTER

    int tt = 1;
    cin >> tt;
    int i = 1;

    primeGenerate(mx);
    while(tt--){
        cout << "Case " << i << ": ";
        solve();
        i++;
    }
}
