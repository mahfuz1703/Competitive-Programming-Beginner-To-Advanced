/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah
/// Problem - https://vjudge.net/problem/UVA-543

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

const int mx = 1e6 + 123;
vector <bool> isPrime(mx);
vector <int> primes;
void primeGenerate(int n){
	isPrime[1] = 0;
    for(int i = 3; i <= n; i += 2) isPrime[i] = 1;

    for(int i = 3; i <= n; i += 2){
        if(isPrime[i] == 1){
            for(int j = i*i; j <= n; j += (i+i)){
                isPrime[j] = 0;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        if(isPrime[i] == 1) primes.push_back(i);
    }
}
int main(){
	FASTER
	primeGenerate(mx);

	int n;
	while(cin >> n){
		if(n == 0) break;
		int dif = -1, p1 = -1, p2 = -1;
		for(auto u : primes){
			if(u > n) break;

			int tp1 = u, tp2 = n - u;
			if(tp2 > 2 and isPrime[tp2] == 1){
				p1 = tp1; p2 = tp2;
				break;
			}
		}
		if(p1 == -1) cout << "Goldbach's conjecture is wrong.\n";
		else cout << n << " = " << p1 << " + " << p2 << "\n";
	}
	return 0;
}

/// Alhamdulilla for everything