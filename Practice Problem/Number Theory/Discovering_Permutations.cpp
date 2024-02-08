// Add some code
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i <= n; i++)
#define print(x) cout << x << "\n"
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);

void solve(){
    int t; cin >> t;
    for(int i = 1; i <= t; i++){
        string all = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int n, k; cin >> n >> k;
        string s = all.substr(0,n);
        string check = s;
        cout << "Case " << i << ":\n";
        for(int i = 1; i <= k; i++){
            print(s);
            next_permutation(s.begin(), s.end());
            if(s == check) break;
        }
    }
}
int main(){
    FASTER

    solve();
    return 0;
}