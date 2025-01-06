#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, target; cin >> n >> target;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];

	sort(arr.begin(), arr.end());
	int l = 0, r = n, mid;

	while(l <= r){
		mid = (l + r) / 2;
		if(arr[mid] == target){
			cout << "Found\n";
			return 0;
		}

		if(arr[mid] < target){
			l = mid + 1;
		}else r = mid - 1;
	}
	cout << "Not Found\n";
	return 0;
}