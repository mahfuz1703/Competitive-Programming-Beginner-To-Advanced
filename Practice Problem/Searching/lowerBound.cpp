#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ ) cin >> arr[i];
    // sort(arr, arr+n);

    int l = 0, r = n-1, mid, ans = n;

    int target; cin >> target;
    while(l <= r){
        mid = (l+r) >> 1;
        if(arr[mid] >= target){
            ans = min(ans, mid);
            r = mid - 1;
        }else l = mid + 1;
    }
    cout << ans << "\n";

    /// Find lower bound using prebuild function
    auto result = lower_bound(arr, arr+n, target) - arr;
    cout << result << "\n";
    return 0;
}