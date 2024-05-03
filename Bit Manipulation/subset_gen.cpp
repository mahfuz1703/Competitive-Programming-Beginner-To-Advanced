#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int arr[n];
	for(int i = 0; i  < n; i++) cin >> arr[i];

	for(int mask = 0; mask < (1 << n); mask++){
		for(int i = 0; i < n; i++){
			if((mask >> i) & 1){ // check iTH bit is on/off in mask
				cout << arr[i] << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}

// Complexity - O(n * 2^n)