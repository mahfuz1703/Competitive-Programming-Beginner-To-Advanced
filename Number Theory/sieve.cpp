#include <bits/stdc++.h>
using namespace std;

const int mx = 1e6+123;
vector <bool> isPrime(mx, 1);
vector <int> prime;

void primeGenerate(int n){  // Time Complexity - O(nlog(n))
    isPrime[1] = 0;

    // all prime numbers generate from 2 - n;
    for(int i = 2; i <= n; i++){
        for(int j = i+i; j <= n; j += i){
            isPrime[j] = 0;
        }
    }

    // all prime number store from 2-n;
    for(int i = 1; i <= n; i++){
        if(isPrime[i] == 1) prime.push_back(i);
    }
}
int main(){
    int n; cin >> n;
    primeGenerate(n);

    for( auto u : prime){
        cout << u << " ";
    }
    cout << "\n";
    return 0;
}
// Complexity - O(nln(n));