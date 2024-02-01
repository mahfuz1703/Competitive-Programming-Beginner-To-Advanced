#include <bits/stdc++.h>
using namespace std;

const int mx = 1e6+123;
bitset <mx> isPrime;
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
    int n; cin >> n;
    primeGenerate(n);

    for( auto u : prime){
        cout << u << " ";
    }
    cout << "\n";
    cout << prime.size() << "\n";
    return 0;
}
// Complexity - O(n);