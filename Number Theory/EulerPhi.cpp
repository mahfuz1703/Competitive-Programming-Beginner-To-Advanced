#include <bits/stdc++.h>
using namespace std;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1e6+123;
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
// Time complexity - O(root(n)/ln(root(n)))

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

    cout << Phi(7) << "\n";
    cout << Phi(12) << "\n";

    return 0;
}