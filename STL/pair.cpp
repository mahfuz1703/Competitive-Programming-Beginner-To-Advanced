/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    FASTER

    pair<int, double> p1; // declare a pair
    pair<int, double> p2 = make_pair(5, 5.2); // declare and initialization a pair with value

    cout << p2.first << " " << p2.second << "\n\n"; // access element from a 

    pair<int, double> p3 = make_pair(10, 10.5);
    swap(p2, p3); //  swap two pair
    cout << p2.first << " " << p2.second << "\n";
    cout << p3.first << " " << p3.second << "\n\n";

    pair<int, string> points[5]; // array of pairs
    points[0] = make_pair(1, "One");
    points[1] = make_pair(2, "Two");
    points[2] = make_pair(3, "Three");
    points[3] = make_pair(4, "Four");
    points[4] = make_pair(5, "Five");

    // cout << points[0].first  << " -> " << points[0].second << "\n"; // access element by specific index from array of pairs

    // for(auto [x, y]: points){ // access elements using for each loop
    //     cout << x << " -> " << y << "\n";
    // }

    // or----
    for(auto u : points){
        cout << u.first << " -> " << u.second << "\n";
    }
    cout << "\n";

    pair<pair<int,  double>, string> p4 = make_pair(make_pair(1, 1.2), "One"); // pair of pairs

    cout << p4.first.first << " " << p4.first.second << " " << p4.second << "\n\n"; // access elements pair of pairs


    p1 = {10, 10.101}; // another way for initialize value of a pair;
    auto [firstElement, secondElement] = p1; // another way for access element of a pair
    cout << firstElement << " " << secondElement << "\n\n";


    int value1; double value2;
    tie(value1, value2) = p1; // using tie for access elements of a pair
    cout << value1 << " " << value2 << "\n";


    return 0;
}

/// Alhamdulilla for everything