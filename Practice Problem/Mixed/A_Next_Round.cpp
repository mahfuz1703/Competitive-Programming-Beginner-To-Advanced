#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i= 0; i < n; i++) cin >> arr[i];

    int ans = 0;
    int firstPlace = arr[k-1];
    for(int i = 0; i < n; i++){
        if(arr[i] == 0) break;
        if(arr[i] >= firstPlace) ans++;
    }
    cout << ans << "\n";
    return 0;
}