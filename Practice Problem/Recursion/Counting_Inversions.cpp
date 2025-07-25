#include <bits/stdc++.h>
using namespace std;

int n, arr[100005], tmp[100005], inversion = 0;

void merge(int l, int r){
	int mid = (l + r) / 2;

	int l1 = l, l2 = mid+1, indx = l;
	while(l1 <= mid and l2 <= r){
		if(arr[l1] < arr[l2]){
			tmp[indx] = arr[l1];
			l1++;
			inversion += (l2 - (mid + 1));
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
		inversion += r - mid;
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
	int tt; cin >> tt;
	while(tt--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		inversion = 0;

		mergeSort(0, n-1);

		cout << inversion << "\n";
	}
}

// Time complexity: O(n logn)
// Space complexity: O(n) // for temp array

/*
Problem:
	1. https://www.hackerrank.com/challenges/ctci-merge-sort/problem
*/