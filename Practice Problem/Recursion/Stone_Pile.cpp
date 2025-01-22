// problem: https://acm.timus.ru/problem.aspx?space=1&num=1005

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n;
int arr[20];
int sol(int indx, int l, int r){
	if(indx == n) return abs(l - r);

	int lr = sol(indx + 1, l + arr[indx], r);
	int rr = sol(indx + 1, l, r + arr[indx]);

	return min(lr, rr);
}

void solve(){
    cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	cout << sol(0, 0, 0) << "\n";
}

int main(){
	FASTER

	int tt = 1;
	// cin >> tt;
	// int i = 1;
	while(tt--){
		// cout << "Case " << i << ": ";
		solve();
		// i++;
	}
}

