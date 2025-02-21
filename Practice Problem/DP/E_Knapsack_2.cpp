#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll weight[1009], tk[1009], dp[109][100009], w, n;
ll knapsack(ll pos, ll val){
	if(val == 0) return 0;

	if(pos >= n){
		return dp[pos][val] = (ll)1e15;
	}

	if(dp[pos][val] != -1){
		return dp[pos][val];
	}

	ll lagbe = weight[pos] + knapsack(pos+1, val - tk[pos]);
	ll lagbena = knapsack(pos+1, val);

	return dp[pos][val] = min(lagbe, lagbena);
}
int main(){
	FASTER

	cin >> n >> w;

	for(int i = 0; i < n; i++){
		cin >> weight[i] >> tk[i];
	}

	memset(dp, -1, sizeof(dp));

	for(int val = 100000; val >= 0; val--){
		if(knapsack(0, val) <= w){
			cout << val << "\n";
			return 0;
		}
	}
}