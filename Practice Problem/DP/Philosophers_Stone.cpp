// problem: https://www.spoj.com/problems/BYTESM2/

#include <bits/stdc++.h>
using namespace std;

int r, c, arr[109][109], dp[1009][1009];

long long solve(int row, int col){
	if(row == r-1){
		return dp[row][col] = arr[row][col];
	}

	if(dp[row][col] != -1){
		return dp[row][col];
	}

	long long mx = 0;
	for(int i = col-1; i <= col+1; i++){
		if(i >= 0 and i < c){
			mx = max(mx, solve(row+1, i));
		}
	}

	return dp[row][col] = arr[row][col] + mx;
}

int main(){
	int tt; cin >> tt;

	while(tt--){
		cin >> r >> c;

		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				cin >> arr[i][j];
			}
		}

		memset(dp, -1, sizeof dp);

		long long ans = 0;
		for(int i = 0; i < c; i++){
			ans = max(ans, solve(0,  i));
		}
		cout << ans << "\n";
	}
}