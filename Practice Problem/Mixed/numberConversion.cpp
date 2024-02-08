#include <bits/stdc++.h>
using namespace std;

/// Decimal to Binary------------------
void decToBin(int n){
    vector <int> ans;
    while(n > 0){
        ans.push_back(n % 2);
        n /= 2;
    }
    reverse(ans.begin(), ans.end());
    for(auto u : ans) cout << u;
    cout << "\n";
}

/// Decimal to Octal------------------
void decToOct(int n){
    vector <int> ans;
    while(n > 0){
        ans.push_back(n % 8);
        n /= 8;
    }
    reverse(ans.begin(), ans.end());
    for(auto u : ans) cout << u;
    cout << "\n";
}

/// Decimal to Hexadecimal------------------
void decToHex(int n){
    vector <char> ans;
    char ch;
    int rem;

    while(n > 0){
        rem = n % 16;
        if (rem < 10) ch = rem + 48; 
        else ch = rem + 55;
        ans.push_back(ch);
        n /= 16;
    }

    reverse(ans.begin(), ans.end());
    for(auto u : ans) cout << u;
    cout << "\n";
}

/// Binary to Decimal-------------------
void BinToDec(string s){
    reverse(s.begin(), s.end());
    int i = 0, ans = 0;
    for(auto u : s){
        ans += (u - '0') * pow(2, i);
        i++; 
    }
    cout << ans << "\n";
}

/// Octal to Decimal-------------------
void OctToDec(string s){
    reverse(s.begin(), s.end());
    int i = 0, ans = 0;
    for(auto u : s){
        ans += (u - '0') * pow(8, i);
        i++; 
    }
    cout << ans << "\n";
}

/// Hexadecimal to Decimal-------------------
void hexToDec(string s){
    reverse(s.begin(), s.end());
    int i = 0, ans = 0;
    for(auto u : s){
        ans += (u - 55) * pow(16, i);
        i++; 
    }
    cout << ans << "\n";
}

int main(){
    // int n; cin >> n;
    string s; cin >> s;
    // decToBin(n);
    // decToOct(n);
    // decToHex(n);

    // BinToDec(s);
    // OctToDec(s);
    hexToDec(s);

    return 0;
}