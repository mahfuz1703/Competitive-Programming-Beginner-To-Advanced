#include <bits/stdc++.h>
using namespace std;


int power(int a, int b){ // complexity: O(logn)
    if(b == 0) return 1;

    if(b % 2 == 0){
        int res = power(a, b/2);
        return res * res;
    }else{
        return power(a, b-1) * 2;
    }
}
int main(){
    int a, b; cin >> a >> b;

    cout << power(a, b) << "\n";
    return 0;
}