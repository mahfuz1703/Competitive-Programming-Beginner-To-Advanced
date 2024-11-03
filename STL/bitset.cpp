#include <bits/stdc++.h>
using namespace std;

int main(){
    bitset<8> bs(5);
    // cout << bs << "\n"; // print all bit of 5
    // cout << bs[2] << "\n"; // print 2th bit of 5

    bs.set(); // set all bit are 1
    bs.set(1); // set 1st index bit are 1

    bs.reset(); // set all bit are 0
    bs.reset(2); // set 2nd index bit are 0

    bs.flip(); // set 1 is to 0, 0 is to 1
    bs.flip(1); // work for just 1st index

    cout << bs.count() << "\n"; // count all on bit
    cout << bs.size() << "\n"; // print size of bitset
    
    cout << bs.to_ullong() << "\n"; // print equavalent decimal value of binary value

	
	string str = bs.to_string(); // convert to string value
    cout << str << "\n";

    cout << bs.any() << "\n"; // at least akta bit 1 ace
    cout << bs.none() << "\n"; // akta o 1 tai
    cout << bs.all() << "\n"; // all bit 1

    cout << bs << "\n\n";

    bitset<10> a(5), b(10);

    cout << a << "\n";
    cout << b << "\n";

    auto a_or_b = a | b; // perform or operation
    auto a_and_b = a & b; // perform and operation
    auto a_xor_b = a ^ b; // perform xor operation
    auto left_shift = b << 1;

    cout << left_shift << "\n";

    return 0;
}