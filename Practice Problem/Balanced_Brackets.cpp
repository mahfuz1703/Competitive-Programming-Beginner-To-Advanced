/// In the name of ALLAH
/// La ilaha illallah Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dekhaw(x) cout << x << "\n"

bool isBalanced(char c1, char c2){
    return (c1 == '(' && c2 == ')') || (c1 == '{' && c2 == '}') || (c1 == '[' && c2 == ']');
}
void somadhan(){
    stack <char>s;

    string str; cin >> str;
    bool balanced = true;
    loop(0, str.size()){
        char c = str[i];
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            s.push(c);
        }else{
            if(s.empty()){
                balanced = false; break;
            }else{
                if(isBalanced(s.top(), c)) s.pop();
                else{
                    balanced = false; break;
                }
            }
        }
    }
    if(!s.empty()) balanced = false;

    if(balanced) dekhaw("YES");
    else dekhaw("NO");
}
int main(){
    FASTER

    int t; cin >> t;
    while(t--){
        somadhan();
    }
    return 0;
}

/// Alhamdulilla for everything