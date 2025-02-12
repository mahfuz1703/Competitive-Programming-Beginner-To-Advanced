// problem: https://codeforces.com/problemset/problem/26/B

#include <bits/stdc++.h>
using namespace std;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    string str; cin >> str;

    stack<char> st;

    int cnt = 0;
    for(auto u : str){
        if(u == '(') st.push(u);
        else{
            if(st.empty()){
                cnt++;
            }else{
                st.pop();
            }
        }
    }

    cout << str.size() - (cnt + st.size()) << "\n";
}

int main(){
    FASTER

    int tt = 1;
    // cin >> tt;
    int i = 1;
    while(tt--){
        // cout << "Case " << i << ": ";
        solve();
        // i++;
    }
}
