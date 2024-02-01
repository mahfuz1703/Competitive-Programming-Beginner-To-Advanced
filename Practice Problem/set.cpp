#include <bits/stdc++.h>
using namespace std;
#define print(x) cout << x << "\n"

int main(){
    set < int > s = {1,1,2,2,3,3,5,5,4,4};
    print(s.size());

    for(auto u : s) cout << u << " ";
    cout << endl;
    return 0;
}