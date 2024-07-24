/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    FASTER

    vector<int> v = {1,2,3,4,5};

    vector<int>::iterator it = v.begin(); // point at 0 index address and bear 0 index value: 1
    cout << *it << "\n"; // output: 1

    it++;
    cout << *it << "\n"; // output: 2

    it += 2;
    cout << *it << "\n"; // output: 4

    it = v.end()-1;
    cout << *it << "\n\n"; // output: 5

    for(it = v.begin(); it != v.end(); it++){
    	cout << *it << " ";
    }cout << "\n\n";

    // vector<int>::reverse_iterator reverse_it = v.rbegin();
    // or---
    auto reverse_it = v.rbegin();
    cout << *reverse_it << "\n";

    reverse_it++;
    cout << *reverse_it << "\n\n";

    for(reverse_it = v.rbegin(); reverse_it != v.rend(); reverse_it++){
    	cout << *reverse_it << " ";
    }cout << "\n\n";

    return 0;
}

/// Alhamdulilla for everything
	   		 			 		  		  	 	  	     	