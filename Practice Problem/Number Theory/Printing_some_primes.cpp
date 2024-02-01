/// Problem - https://www.spoj.com/problems/TDPRIMES/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mx = 1e8+123;
// vector <bool> isPrime(mx);
bitset<mx> isPrime;
vector <int> prime;

void primeGenerate(int n){
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
int main(){
    primeGenerate(mx);

    // cout << prime.size() << "\n";
    for(int i = 1; i < prime.size(); i += 100){
        cout << prime[i-1] << "\n";
    }
    return 0;
}
/// Problem - https://www.spoj.com/problems/TDPRIMES/