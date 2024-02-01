/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah
// Problem - https://atcoder.jp/contests/abc172/tasks/abc172_d

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

const int mx = 1e7+123;
int cnt[mx];
void solve(){
	int n; cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j += i){
			cnt[j]++;
		}
	}

	ll sum = 0;
	for(int i = 1; i <= n; i++){
		sum += (1LL * cnt[i] *i);
	}
	
	print(sum);
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