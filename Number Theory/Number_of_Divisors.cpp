/// NOD - Number of Divisor---------
/// Practice Problem - https://www.hackerearth.com/problem/algorithm/number-of-divisors-5/
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

int main(){
    primeGenerate(mx);

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        int ans = NOD(n);
        cout << ans << "\n";
    }
    return 0;
}