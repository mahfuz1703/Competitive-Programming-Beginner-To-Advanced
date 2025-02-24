// problem: https://lightoj.com/problem/neighbor-house

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

	long long mx = 1e9 + 123;
	for(int i = 0; i < 3; i++){
		if(i != col){
			mx = min(mx, solve(row+1, i));
		}
	}

	return dp[row][col] = arr[row][col] + mx;
}

int main(){
	int tt; cin >> tt;

	int i = 1;
	while(tt--){
		cin >> n;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < 3; j++){
				cin >> arr[i][j];
			}
		}

		memset(dp, -1, sizeof dp);

		long long ans = 1e9+123;
		for(int i = 0; i < 3; i++){
			ans = min(ans, solve(0,  i));
		}
		cout << "Case " << i << ": ";
		cout << ans << "\n";
		i++;
	}
}