// problem: https://www.spoj.com/problems/EKO/en/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isPowerOfTwo(int x) {
	return x and (!(x & (x - 1)));
}

bool possible(vector<ll> arr, ll m, ll mid){
	ll sum = 0;
	for(auto u : arr){
		if(u >= mid){
			sum += u - mid;
		}
	}

	if(sum >= m) return true;
	else return false;
}

void solve(){
    ll n, m; cin >> n >> m;
	vector<ll> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];

	ll l = 0, r = 1e10, mid = 0, ans = 0;
	while(l <= r){
		mid = (l + r) / 2;
		if(possible(arr, m, mid)){
			ans = mid;
			l = mid + 1;
		}else r = mid - 1;
	}
	cout << ans << "\n";

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

