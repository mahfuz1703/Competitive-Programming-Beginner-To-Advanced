#include <bits/stdc++.h>
using namespace std;

int main(){
	int a = 1e9, b = 1e9, m = 1000;

	// int ans = (a + b) % m;
	int ans = ((a % m) + (b % m)) % m;
	cout << ans << "\n";


	return 0;
}