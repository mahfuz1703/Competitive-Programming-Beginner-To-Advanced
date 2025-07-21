#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define ll long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// Problem - https://codeforces.com/contest/1994/problem/B

void solve(){
    int n; cin >> n;

    string s, t; cin >> s >> t;

    if(s == t or s[0] == '1'){
        cout << "YES\n";
    }else{
        int indx = -1;

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                indx = i;
                break;
            }
        }

        if(indx != -1){
            bool yes = true;
            for(int i = 0; i < n; i++){
                if(s[i] != t[i]){
                    if(indx > i){
                        yes = false;
                        break;
                    }
                }
            }

            if(yes) cout << "YES\n";
            else cout << "NO\n";
        }else cout << "NO\n";
    }
}

int main(){
    FASTER
    int tt = 1; 
    cin >> tt;

    while(tt--){
        solve();
    }
}