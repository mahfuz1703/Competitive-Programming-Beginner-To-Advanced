#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll weight[1009], tk[1009], dp[109][100009], w, n;
ll knapsack(ll pos, ll rem_w){
	if(pos == n) return 0;
	if(rem_w == 0) return 0;

	if(dp[pos][rem_w] != -1){
		return dp[pos][rem_w];
	}

	if(weight[pos] <= rem_w){
		ll nibo = knapsack(pos+1, rem_w - weight[pos]) + tk[pos];
		ll nibona = knapsack(pos+1, rem_w);

		return dp[pos][rem_w] = max(nibo, nibona);
	}else{
		ll nibona = knapsack(pos+1, rem_w);
		return dp[pos][rem_w] = nibona;
	}
}
int main(){
	FASTER

	cin >> n >> w;

	for(int i = 0; i < n; i++){
		cin >> weight[i] >> tk[i];
	}

	memset(dp, -1, sizeof(dp));

	cout << knapsack(0, w) << "\n";
}