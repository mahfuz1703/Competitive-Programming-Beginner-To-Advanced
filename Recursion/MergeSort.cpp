#include <bits/stdc++.h>
using namespace std;

int n, arr[100005], tmp[100005];

void merge(int l, int r){
	int mid = (l + r) / 2;

	int l1 = l, l2 = mid+1, indx = l;
	while(l1 <= mid and l2 <= r){
		if(arr[l1] < arr[l2]){
			tmp[indx] = arr[l1];
			l1++;
		}else{
			tmp[indx] = arr[l2];
			l2++;
		}
		indx++;
	}

	while(l1 <= mid){
		tmp[indx] = arr[l1];
		l1++;
		indx++;
	}
	while(l2 <= r){
		tmp[indx] = arr[l2];
		l2++;
		indx++;
	}

	for(int i = l; i <= r; i++){
		arr[i] = tmp[i];
	}
}

void mergeSort(int l, int r){ // O(log n)
	if(l == r) return;

	int mid = (l + r)/2;
	
	// divide
	mergeSort(l, mid);
	mergeSort(mid + 1, r);

	// conquer
	merge(l, r); // O(n)
}

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	mergeSort(0, n-1);

	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}cout << "\n";
}

// Time complexity: O(n logn)
// Space complexity: O(n) // for temp array

/*
Practice Problems:
	1. https://www.spoj.com/problems/MERGSORT/en/
	2. https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_B
	3. https://www.hackerrank.com/challenges/ctci-merge-sort/problem
*/