// problem: https://codeforces.com/problemset/problem/474/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isPowerOfTwo(int x) {
	return x and (!(x & (x - 1)));
}

void solve(){
    int n; cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];

	for(int i = 1; i < n; i++){
		ll tmp = arr[i-1] + arr[i];
		arr[i] = tmp;
	}

	int q; cin >> q;
	while(q--){
		int x; cin >> x;
		auto indx = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
		cout << indx + 1 << "\n";
	}
	// for(auto u : arr) cout << u << " ";
	// cout << "\n";
}

int main(){
	FASTER

	int tt = 1;
	// cin >> tt;
	// int i = 1;
	while(tt--){
		// cout << "Case " << i << ": ";
		solve();
		// i++;
	}
}

