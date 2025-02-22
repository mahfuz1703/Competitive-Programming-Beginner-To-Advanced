// problem: https://atcoder.jp/contests/dp/tasks/dp_b

#include <bits/stdc++.h>
using namespace std;

long long n, k, arr[100009], dp[100009];

int mn = 1e9 + 123;
long long solve(int indx){
	if(indx == n) {
		return 0;
	}

	if(dp[indx] != -1){
		return dp[indx];
	}

	long long cost = 1e9 + 123;
	

	for(int i = 1; i <= k; i++){
		if(indx + i <= n){
			cost = min(cost, abs(arr[indx] - arr[indx+i]) + solve(indx + i));
		}
	}

	return dp[indx] = cost;
}

int main(){
	cin >> n >> k;

	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}

	memset(dp, -1, sizeof dp);

	
	cout << solve(1) << "\n";
}