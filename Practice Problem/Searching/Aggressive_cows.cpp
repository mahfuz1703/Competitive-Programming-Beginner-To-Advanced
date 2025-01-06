// Problem: https://www.spoj.com/problems/AGGRCOW/en/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isPowerOfTwo(int x) {
	return x and (!(x & (x - 1)));
}

bool oky(int arr[], int n, int c, int mid){
	int curr_cow = arr[1], cnt = 0;
	for(int i = 1; i <= n; i++){
		if(curr_cow <= arr[i]){
			cnt++;
			curr_cow = arr[i] + mid;
		}
	}

	if(cnt >= c) return true;
	else return false;
}

void solve(){
    int n, c; cin >> n >> c;
	int arr[n+1];
	for(int i = 1; i <= n; i++) cin >> arr[i];
	sort(arr+1, arr + n + 1);

	int l = 0, r = 1e9, mid, ans = 0;
	while(l <= r){
		mid = (l + r) / 2;

		if(oky(arr, n, c, mid)){
			ans = max(ans, mid);
			l = mid + 1;
		}else r = mid - 1;
	}

	cout << ans << "\n";
	
}

int main(){
	FASTER

	int tt = 1;
	cin >> tt;

	while(tt--){
		solve();
	}
}

