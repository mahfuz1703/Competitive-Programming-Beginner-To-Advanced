#include <bits/stdc++.h>
using namespace std;

// Problem - https://www.codechef.com/problems/PERMOR

#define ll long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n; cin >> n;
    
    for(int i = n; i >= 1; i--){
        cout << i << " ";
    }
    cout << "\n";
}
int main(){
	FASTER

	int t = 1;
	cin >> t;
	while(t--) solve();
	return 0;
}
