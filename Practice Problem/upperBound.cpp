#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ ) cin >> arr[i];
    // sort(arr, arr+n);

    int l = 0, r = n-1, mid, ans = 0;

    int target; cin >> target;
    while(l <= r){
        mid = (l+r) >> 1;
        if(arr[mid] <= target){
            l = mid + 1;
        }else{
            ans = max(ans, mid);
            r = mid - 1;
        }
    }
    cout << ans << "\n";

    /// Find upperbound using prebuild function
    // auto result = upper_bound(arr, arr+n, target) - arr;
    // cout << result << "\n";
    return 0;
}