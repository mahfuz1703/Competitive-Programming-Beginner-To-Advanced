/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah
// problem: https://codeforces.com/contest/26/problem/A

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
}

void solve(){
	int n; cin >> n;
	int ans = 0;
	for(int i = 1; i <= n; i++){
		int cnt = 0;
		int sz = sqrt(i);
		for(int j = 1; j <= sz; j++){
			if(i % j == 0){
				if(isPrime(j)) cnt++;
				if(i / j != j){
					if(isPrime(i / j)) cnt++;
				}
			}
		}
		if(cnt == 2) ans++;
	}
	cout << ans << "\n";
}
int main(){
	FASTER

	int t = 1;
	// cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}

/// Alhamdulilla for everything