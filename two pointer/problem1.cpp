/// Find the pair whose sum is equal to x
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    int x; cin >> x;

    int idx1 = 0, idx2 = 0;
    int i = 0, j = n-1;
    while(i < j){
        if(v[i] + v[j] == x){
            idx1 = i; idx2 = j; break;
        }
        if(v[i] + v[j] > x) j--;

        if(v[i] + v[j] < x) i++;
    }


    if(idx1 != 0 and idx2 != 0) cout << idx1 << " " << idx2 << "\n";
    else cout << "X is not found\n";

    return 0;
}