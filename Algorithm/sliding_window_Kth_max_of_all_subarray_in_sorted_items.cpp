#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k; cin >> n >> k;
	int arr[n+1];
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}

	priority_queue<int> q;
	for(int i = 1; i <= k; i++){
		q.push(arr[i]);
	}

	for(int i = k + 1; i <= n; i++){
		cout << q.top() << "\n";
		q.pop();

		q.push(arr[i]);
	}
	cout << q.top() << "\n";

}