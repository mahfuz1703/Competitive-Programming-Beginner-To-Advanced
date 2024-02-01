/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

void solve(){
	int n; cin >> n;
	int sz = sqrt(n);
	vector <int> divisors;
	for(int i = 1; i <= sz; i++){
		if(n % i == 0){
			divisors.push_back(i);
			if(n / i != i) divisors.push_back(n/i);
		}
	}
	sort(divisors.begin(), divisors.end());

	for(auto u:divisors) cout << u << " ";
	cout << "\n";

	// input - 10
	// output - 1 2 5 10

	// complexity - O(√n)
	
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