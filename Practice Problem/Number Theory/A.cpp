#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    ll n, m; cin >> n >> m;

    vector<int> arr(n), tmp(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        tmp[i] = arr[i];
    }
    ll x; cin >> x;

    bool oky = true;

    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            oky = false;
            break;
        }
    }

    if(oky){
        cout << "YES\n";
        return;
    }

    oky = true;

    for(int i = 0; i < n-1; i++){
        if(arr[i] < arr[i+1]){
            oky = false;
            break;
        }
    }

    if(oky){
        cout << "YES\n";
        return;
    }

    reverse(tmp.begin(), tmp.end());

    for(int i = 0; i < n; i++){
        tmp[i] = x - tmp[i];
    }

    if(arr == tmp){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";

}

int main(){
    FASTER

    int tt = 1;
    cin >> tt;

    int i = 1;
    while(tt--){
        // cout << "Case " << i << ": ";
        solve();
        // i++;
    }
}
