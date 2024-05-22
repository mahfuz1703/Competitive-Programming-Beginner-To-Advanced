/// In the name of ALLAH

#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int arr[100];
bool is_taken[100];
int n;

int target_sum = 5;
int cnt = 0;
void subSeqGen(int pos){
	if(pos > n){
		int sum = 0;
		for(int i = 1; i <= n; i++){
			if(is_taken[i]){
				cout << arr[i] << " ";
				sum += arr[i];
			}
		}
		if(sum == target_sum) cnt++; // count subsequence that sum is equal to target_sum
		cout << "\n";
		return;
	}

	is_taken[pos] = false; // don not taken
	subSeqGen(pos + 1);

	is_taken[pos] = true; // is taken
	subSeqGen(pos + 1);
}


// more optimize for count subsequence that sum is equal to target sum
void subSeqGenWithTargetSum(int pos, int currentSum){
	if(pos > n){
		if(target_sum == currentSum) cnt++;
		return;
	}

	is_taken[pos] = false;
	subSeqGenWithTargetSum(pos + 1, currentSum);

	is_taken[pos] = true;
	subSeqGenWithTargetSum(pos + 1, currentSum + arr[pos]);
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	// subSeqGen(1);

	subSeqGenWithTargetSum(1, 0);


	cout << "Count: " << cnt << "\n";

	return 0;
}