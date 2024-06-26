#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int n = 100000000;
bitset <n> isPrime;
vector <int> prime;

void primeGenerate(){
    isPrime[1] = 0;
    for(ll i = 3; i <= n; i += 2) isPrime[i] = 1;

    // all prime numbers generate from 2 - n;
    ll sq = sqrt(n);
    for(ll i = 3; i <= sq; i += 2){
        if(isPrime[i] == 1){
            for(ll j = i*i; j <= n; j += (i+i)){
                isPrime[j] = 0;
            }
        }
    }

    // all prime number store from 2-n;
    isPrime[2] = 1;
    prime.push_back(2);
    for(ll i = 3; i <= n; i += 2){
        if(isPrime[i] == 1) prime.push_back(i);
    }
}
int main(){
    primeGenerate();

    for( auto u : prime){
        cout << u << "\n";
    }
    return 0;
}
// Complexity - O(n);