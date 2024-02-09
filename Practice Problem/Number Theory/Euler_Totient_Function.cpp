/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

// Problem - https://www.spoj.com/problems/ETF/

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

const int mx = 1e3+123;
bitset <mx> isPrime;
vector <int> prime;

void primeGenerate(int n){ // generate prime using sieve
    isPrime[1] = 0;
    for(int i = 3; i <= n; i += 2) isPrime[i] = 1;

    // all prime numbers generate from 2 - n;
    int sq = sqrt(n);
    for(int i = 3; i <= sq; i += 2){
        if(isPrime[i] == 1){
            for(int j = i*i; j <= n; j += (i+i)){
                isPrime[j] = 0;
            }
        }
    }

    // all prime number store from 2-n;
    isPrime[2] = 1;
    prime.push_back(2);
    for(int i = 3; i <= n; i += 2){
        if(isPrime[i] == 1) prime.push_back(i);
    }
}

int Phi(int n){
    int ret = n;

    for(auto p : prime){
        if(1LL * p * p > n or n == 0) break;

        if(n % p == 0){
            ret /= p;
            ret *= (p-1);

            while(n % p == 0){
                n /= p;
            }
        }
    }

    if(n > 1){
        ret /= n;
        ret *= (n-1);
    }

    return ret;
}


int main(){
    FASTER

    primeGenerate(mx);

    int t = 1;
    cin >> t;
    while(t--){
        int n; cin >> n;

        print(Phi(n));
    }
    return 0;
}

/// Alhamdulilla for everything