#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// you have an array a of n size and inital value all elements is 0. Also you have some queries q where each queries you have a range l to r and a value x. Now you will add x in l to r each element. Now finally print the array after complete all queries

void solve(){
  int n, q; cin >> n >> q;

  ll arr[n+1] = {0};
  

  while(q--){
    int l, r, x; cin >> l >> r >> x;

    arr[l] += x;

    if(r+1 < n){
      arr[r+1] -= x;
    }
  }

  ll pre[n+1];
  pre[0] = 0;
  for(int i = 1; i <= n; i++){
    pre[i] = pre[i-1] + arr[i];
  }

  for(int i = 1; i <= n; i++){
    cout << pre[i] << " ";
  }
  cout << "\n";

  /*
    Input:
          5 3
          2 3 1
          3 5 3
          1 2 1
    Output:
          1 2 4 3 3
  */
}

int main(){
  FASTER

  int tt = 1;
  // cin >> tt;

  while(tt--){
    solve();
  }
}