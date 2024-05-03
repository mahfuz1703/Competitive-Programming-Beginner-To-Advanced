// Problem - You are given n <= 20 numbers, each up to 10^9. Is there a subset with a sum equal to a given goal s?

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, s; cin >> n >> s;
	int arr[n];
	for(int i = 0; i  < n; i++) cin >> arr[i];

	int cnt = 0;
	for(int mask = 0; mask < (1 << n); mask++){
		int sum = 0;
		for(int i = 0; i < n; i++){
			if((mask >> i) & 1){ // check iTH bit is on/off in mask
				sum += arr[i];
			}
		}
		if(sum == s) cnt++;
	}

	cout << cnt << "\n";
	return 0;
}

// Complexity - O(n * 2^n)