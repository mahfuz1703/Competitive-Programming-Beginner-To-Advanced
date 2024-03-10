/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

bool isPrime(ll n){
    if(n == 1) return false;
	for(ll i = 2; 1LL * i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;

	// complexity - O(√n)
}
int main(){
	FASTER

    ll n; cin >> n;
    if(isPrime(n)) print("YES");
    else print("NO");
	return 0;
}

/// Alhamdulilla for everything