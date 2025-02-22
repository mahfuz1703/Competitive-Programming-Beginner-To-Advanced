// problem: https://atcoder.jp/contests/dp/tasks/dp_a

#include <bits/stdc++.h>
using namespace std;

long long n, arr[100009], dp[100009];

int mn = 1e9 + 123;
long long solve(int indx){
	if(indx == n) {
		return 0;
	}

	if(dp[indx] != -1){
		return dp[indx];
	}

	long long cost = 1e9 + 123;

	cost = min(cost, abs(arr[indx] - arr[indx+1]) + solve(indx + 1));

	if(indx + 2 <= n){
		cost = min(cost, abs(arr[indx] - arr[indx+2]) + solve(indx + 2));
	}

	return dp[indx] = cost;
}

int main(){
	cin >> n;

	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}

	memset(dp, -1, sizeof dp);

	
	cout << solve(1) << "\n";
}