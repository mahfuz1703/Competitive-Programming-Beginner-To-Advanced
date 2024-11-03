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

// set - maintain order and unique behaviour
// unordered_set - do not maintain order behaviour but maintain unique
// multiset - do not maintain unique behaviour but maintain order


// buildin functions-----------------
// insert --- O(logn)
// find --- O(logn)
// erase --- O(logn + k)
// erase(remove an iterator) --- O(1)
// count --- O(logn + k)