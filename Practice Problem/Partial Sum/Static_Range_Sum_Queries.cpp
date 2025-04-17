// Problem: https://cses.fi/problemset/task/1646

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve(){
  int n, q; cin >> n >> q;
 
  ll arr[n+1], pre[n+1];
  pre[0] = 0;
  for(int i = 1; i <= n; i++) cin >> arr[i];
  for(int i = 1; i <= n; i++){
    pre[i] = pre[i-1] + arr[i];
  }
 
  while(q--){
    int l, r; cin >> l >> r;
    cout << pre[r] - pre[l-1] << "\n";
  }
}
 
int main(){
  FASTER
 
  int tt = 1;
  // cin >> tt;
 
  while(tt--){
    solve();
  }
}