#include <bits/stdc++.h>
using namespace std;

/*
	
A map is an associative container that stores key-value pairs. Each element in the map consists of a unique key and an associated value.
	* The keys are sorted in ascending order
	* Map provides fast lookup of the value associated with a key
	* buildin functions
	insert -- O(longn)
	find -- O(longn)
	erase -- O(longn)
	size --  O(1)
	lower_bound -- O(longn)
	upper_bound -- O(longn)

*/

void print(map<int, string> mp){
	for(auto u : mp){
		cout << u.first << " " << u.second << "\n";
	}
}

int main(){
	map<int, string> mp = {{1, "one"}, {2, "two"}};

	mp.insert({3, "three"});
	mp[4] = "four";
	print(mp);

	cout << "\nSize: " << mp.size() << "\n";

	auto it = mp.find(3);
	if(it != mp.end()){
		// cout << "\nElement found: " << (*it).first << " " << (*it).second << "\n";
		cout << "\nElement found: " << it->first << " " << it->second << "\n";
	}else cout << "Not found\n";


	auto it_lower = mp.lower_bound(2);
	auto it_upper = mp.upper_bound(3);
	if(it_lower != mp.end()){
		cout << "\nLower bound: " << it_lower->first << " " << it_lower->second << "\n";
	}

	if(it_upper != mp.end()){
		cout << "\nUpper bound: " << it_upper->first << " " << it_upper->second << "\n\n";
	}


	for(auto [key, value] : mp){
		cout << key << " " << value << "\n";
	}
}