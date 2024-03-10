/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

void solve(){
	int n; cin >> n;
	int sz = sqrt(n);
	for(int i = 1; i <= sz; i++){
        if(i * i <= n){
            cout << i*i << " ";
        }
    }
    cout << "\n";

	// input - 100
	// output - 1 4 9 16 25 36 49 64 81 100

	// complexity - O(√n)
	
}
int main(){
	FASTER

	int t = 1;
	// cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}

/// Alhamdulilla for everything