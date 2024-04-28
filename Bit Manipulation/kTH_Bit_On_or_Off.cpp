#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check_kTH_Bit(int n, int k){
    return (n >> k) & 1;
}
int main(){
    
    int n, k; cin >> n >> k;
    cout << check_kTH_Bit(n, k) << "\n";
    return 0;
}