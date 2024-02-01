/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

const int mx = 1e6+123;
vector <int> divisors[mx];
void solve(){
	int n; cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j += i){
			divisors[j].push_back(i);
		}
	}

	for(int i = 1; i <= n; i++){
		cout << i << " -> ";
		for(auto u:divisors[i]) cout << u << " ";
		cout << "\n";
	}

	// input - 10
	// output - 
		// 1 -> 1 
		// 2 -> 1 2 
		// 3 -> 1 3 
		// 4 -> 1 2 4 
		// 5 -> 1 5 
		// 6 -> 1 2 3 6 
		// 7 -> 1 7 
		// 8 -> 1 2 4 8 
		// 9 -> 1 3 9 
		// 10 -> 1 2 5 10

	// complexity - O(n*ln(n)) [Harmonic Series]
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