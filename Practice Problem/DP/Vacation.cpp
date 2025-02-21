// problem: https://atcoder.jp/contests/dp/tasks/dp_c

#include <bits/stdc++.h>
using namespace std;

long long n, arr[100009][3], dp[100009][3];

long long solve(int row, int col){
	if(row == n-1){
		return dp[row][col] = arr[row][col];
	}

	if(dp[row][col] != -1){
		return dp[row][col];
	}

	long long mx = 0;
	for(int i = 0; i < 3; i++){
		if(i != col){
			mx = max(mx, solve(row+1, i));
		}
	}

	return dp[row][col] = arr[row][col] + mx;
}

int main(){
	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			cin >> arr[i][j];
		}
	}

	memset(dp, -1, sizeof dp);

	long long ans = 0;
	for(int i = 0; i < 3; i++){
		ans = max(ans, solve(0,  i));
	}
	cout << ans << "\n";
}