// Problem: https://cses.fi/problemset/task/1643

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve(){
  int n; cin >> n;
 
  ll arr[n+1], pre[n+1];
  for(int i = 1; i <= n; i++) cin >> arr[i];
 
  pre[0] = 0;
  for(int i = 1; i <= n; i++){
    pre[i] = pre[i-1] + arr[i];
  }
 
  ll min_prefix_sum = 0;
  ll mx = arr[1];
 
  for(int i = 1; i <= n; i++){
    mx = max(mx, pre[i] - min_prefix_sum);
    min_prefix_sum = min(min_prefix_sum, pre[i]);
  }
 
  cout << mx << "\n";
  // cout << min_prefix_sum << "\n";
}
 
int main(){
  FASTER
 
  int tt = 1;
  // cin >> tt;
 
  while(tt--){
    solve();
  }
}