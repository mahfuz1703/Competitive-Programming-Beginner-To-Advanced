#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1e6+123;
int isPrime[mx] = {0};
void primeGenerate(int n){
    for(int i = 2; i <= mx; i++){
        if(isPrime[i] == 0){
            for(int j = 2; i * j <= mx; j++){
                isPrime[i*j] = 1;
            }
        }
    }
}

void solve(){
	int n; cin >> n;

	while(n--){
		ll x; cin >> x;
		ll sq = sqrt(x);

		if(sq == 1) cout << "NO\n";
		else if((sq * sq == x) and (isPrime[sq] == 0)){
			cout << "YES\n";
		}else cout << "NO\n";
	}
}
int main(){
	FASTER

	int t = 1;
	// cin >> t;
	primeGenerate(mx);
	while(t--){
	    solve();
	}
	return 0;
}