/// Find the pair in Array Whose sum is closest to X
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    int x; cin >> x;

    int idx1 = 0, idx2 = 0;
    int i = 0, j = n-1, diff = INT_MAX;
    while(i < j){
        int sum = v[i] + v[j];
        if(abs(sum-x) < diff){
            idx1 = i; idx2 = j;
            diff = abs(sum - x);
        }
        
        if(sum > x) j--;
        else i++;
    }


    if(idx1 != 0 and idx2 != 0) cout << idx1 << " " << idx2 << "\n";
    else cout << "X is not found\n";

    return 0;
}