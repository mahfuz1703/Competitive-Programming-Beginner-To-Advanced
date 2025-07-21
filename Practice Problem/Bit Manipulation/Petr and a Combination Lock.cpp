#include <bits/stdc++.h>
using namespace std;

// Problem - https://codeforces.com/problemset/problem/1097/B

#define ll long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i  < n; i++) cin >> arr[i];

    int count = 0;
    for(int mask = 0; mask < (1 << n); mask++){
        for(int i = 0; i < n; i++){
            if((mask >> i) & 1){ // check iTH bit is on/off in mask
                count += arr[i];
                // cout << 1 << " ";
            }else {
                count -= arr[i];
                // cout << 0 << " ";
            }
        }
        // cout << "\n";
        count %= 360;
        if(count == 0){
            cout << "YES\n";
            return;
        }
        count = 0;
    }
    cout << "NO";
}

int main(){
    FASTER
    int tt = 1; 
    // cin >> tt;

    while(tt--){
        solve();
    }
}
