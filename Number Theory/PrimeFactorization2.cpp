#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector <ll> primeFactors;
void primeFactorization(ll n){ // Time complexity - O(sqrt(n));
    int sq = sqrt(n);
    for(int i = 2; i <= sq; i++){
        if(n % i == 0){
            while(n % i == 0){
                primeFactors.push_back(i);
                n /= i;
            }
        }
    }
    if(n > 1) primeFactors.push_back(n);
}
int main(){
    ll n; cin >> n;
    primeFactorization(n);

    for(auto u : primeFactors) cout << u << " ";
    cout << "\n";
}