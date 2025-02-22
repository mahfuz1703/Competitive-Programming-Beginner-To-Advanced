// problem: https://codeforces.com/contest/455/problem/A

#include <bits/stdc++.h>
using namespace std;

long long n, dp[100009], fre[100009];

long long solve(long long indx){
	if(indx <= 0) return 0;

	if(dp[indx] != -1) return dp[indx];

	long long mx;

	mx = solve(indx - 2) + fre[indx] * indx;
	mx = max(mx, solve(indx - 1));

	return dp[indx] = mx;
}

int main(){
	cin >> n;

	long long mx = 0;
	for(int i = 1; i <= n; i++){
		long long x; cin >> x;
		fre[x]++;
		mx = max(mx, x);
	}

	memset(dp, -1, sizeof dp);
	cout << solve(mx) << "\n";
}