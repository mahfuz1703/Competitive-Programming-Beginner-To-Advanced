/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    FASTER

    tuple<int, double, string> t; // declare a tuple
    t = make_tuple(1, 1.101, "One"); // initialize tuple with values

    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\n\n"; // access elements of a 

    auto [firstElement, secondElement, thirdElement] = t; // another way for access element of a tuple
    cout << firstElement << " " << secondElement << " " << thirdElement << "\n\n";

    int x; double y; string z;
    tie(x, y, z) = t; // another way for access elements of a tuple
    cout << x << " " << y << " " << z << "\n\n";


    tuple<pair<int, double>, string, tuple<char, string>> t2 = make_tuple(make_pair(1, 1.101), "One", make_tuple('A', "(A for apple)")); // tuple pairs and tuples
    cout << get<0>(t2).first << " " << get<0>(t2).second << " " << get<1>(t2) << " " << get<0>(get<2>(t2)) << " " << get<1> (get<2>(t2)) << "\n";

    return 0;
}

/// Alhamdulilla for everything