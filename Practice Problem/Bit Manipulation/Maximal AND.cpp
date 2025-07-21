#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define ll long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// Problem - https://codeforces.com/contest/1669/problem/H

const int mxBit = 30;
void solve(){
    int n, k; cin  >> n >> k;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >>  arr[i];
    }

    vector<int> bit(mxBit+1);
    for(int i = 0; i < n; i++){
        for(int b = 0; b <= mxBit; b++){
            if((arr[i] >> b) & 1){
                bit[b]++;
            }
        }
    }

    int ans = 0;
    for(int i = mxBit; i >= 0; i--){
        if(bit[i] == n){
            ans += (1LL << i);
        }else{
            int need = n - bit[i];
            if(k >= need){
                ans += (1LL << i);
                k -= need;
            }
        }
    }

    cout << ans << "\n";
}

int main(){
    FASTER
    int tt = 1; 
    cin >> tt;

    while(tt--){
        solve();
    }
}