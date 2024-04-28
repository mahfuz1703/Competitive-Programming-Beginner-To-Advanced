#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int n = 1e6 + 123;
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

    int tt = 1;
    cin >> tt;
    while(tt--){
        int num; cin >> num;

        int cnt = 0;
        for(auto u : prime){
            if(u > num) break;;

            bool oky = true;
            while(u > 0){
                int tmp = n % 10;
                u /= 10;

                if(tmp == 0){
                    oky = false;
                }
            }
            if(oky) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}