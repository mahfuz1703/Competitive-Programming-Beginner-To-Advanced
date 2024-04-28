#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check_kTH_Bit(int n, int k){
    return (n >> k) & 1;
}

void print_on_bits(int n){
    for(int k = 0; k < 32; k++){
        if(check_kTH_Bit(n, k)){
            cout << k << " ";
        }
    }
    cout << "\n";
}

bool even_or_odd(int n){
    if(n & 1) return 0;
    else return 1;
}

void count_on_bits(int n){
    int cnt = 0;
    for(int k = 0; k < 32; k++){
        if(check_kTH_Bit(n, k)){
            cnt++;
        }
    }
    cout << cnt << "\n";
}

void print_off_bits(int n){
    for(int k = 0; k < 32; k++){
        if(!check_kTH_Bit(n, k)){
            cout << k << " ";
        }
    }
    cout << "\n";
}
int main(){
    
    int n; cin >> n;
    // print_on_bits(n);
    // print_off_bits(n);
    // count_on_bits(n);
    cout << even_or_odd(n) << "\n";
    return 0;
}