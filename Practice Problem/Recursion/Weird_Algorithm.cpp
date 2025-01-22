// problem: https://cses.fi/problemset/task/1068/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void sol(ll n){
	cout << n << " ";
	if(n == 1) return;

	if(n % 2 == 0) sol(n/2);
	else sol((n * 3) + 1);
}

void solve(){
    int n; cin >> n;
	

	sol(n);
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

