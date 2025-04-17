// problem: https://cses.fi/problemset/task/1619/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
  int n; cin >> n;

  vector< pair<int, int> > p;
  set<int> st;

  for(int i = 1; i <= n; i++){
    int l, r; cin >> l >> r;
    p.push_back({l, r});

    st.insert(l);
    st.insert(r);
  }

  map<int, int> mp;
  int cnt = 1;
  for(auto u : st){
    mp[u] = cnt;
    cnt++;
  }

  for(int i = 0; i < p.size(); i++){
    p[i].first = mp[p[i].first];
    p[i].second = mp[p[i].second];
  }

  ll arr[n*2 + 9] = {0};

  for(auto [x, y]: p){
    arr[x]++;
    arr[y]--;
  }

  ll mx = 0;
  for(int i = 1; i <= 2 * n; i++){
    arr[i] += arr[i-1];
    mx = max(mx, arr[i]);
  }

  cout << mx << "\n";
}

int main(){
  FASTER

  int tt = 1;
  // cin >> tt;

  while(tt--){
    solve();
  }
}