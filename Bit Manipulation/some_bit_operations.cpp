#include <bits/stdc++.h>
using namespace std;
#define ll long long

// check kTH bit on/off
int check_kTH_Bit(int n, int k){
    return (n >> k) & 1;
}

// print all on  bits of a number
void print_on_bits(int n){
    for(int k = 0; k < 32; k++){
        if(check_kTH_Bit(n, k)){
            cout << k << " ";
        }
    }
    cout << "\n";
}

// check a number even or odd
bool even_or_odd(int n){
    if(n & 1) return 0;
    else return 1;
}

// count on bits of a number
int count_on_bits(int n){
    int cnt = 0;
    for(int k = 0; k < 32; k++){
        if(check_kTH_Bit(n, k)){
            cnt++;
        }
    }
    return cnt;
}

// print all off bits of a number
void print_off_bits(int n){
    for(int k = 0; k < 32; k++){
        if(!check_kTH_Bit(n, k)){
            cout << k << " ";
        }
    }
    cout << "\n";
}

// set kTH bit on
int set_kTH_bit_on(int n, int k){
    return (1 << k) | n;
}

// set kTH bit off
int set_kTH_bit_off(int n,  int k){
    return (~(1 << k)) & n;
}

// kTH bit toggle of a number
int toggle_kTH_bit(int x, int k){
    return x ^ (1 << k);
}

int multiply_by_2(int n){
    return n << 1;
}

int divide_by_2(int n){
    return n >> 1;
}

int power_of_2(int n){
    return 1 << n;
}

bool check_power_of_2(int n){
    return (count_on_bits(n) == 1);
}
int main(){
    
    // int n; cin >> n;
    // print_on_bits(5);
    // print_off_bits(n);
    // count_on_bits(n);
    // cout << even_or_odd(n) << "\n";
    // cout << set_kTH_bit_on(11, 2) << "\n";
    // cout << set_kTH_bit_off(15, 2) << "\n";
    // cout << toggle_kTH_bit(11, 2) << "\n";
    // cout << multiply_by_2(100) << "\n";
    // cout << divide_by_2(100) << "\n";
    // cout << power_of_2(4) << "\n";
    cout << check_power_of_2(16) << "\n";
    return 0;
}