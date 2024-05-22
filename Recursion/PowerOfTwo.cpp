/// In the name of ALLAH

#include <bits/stdc++.h>
using namespace std;
#define ll long long;


int mem[1000007];
int powerOfTwo(int n){ // complexity O(n);
	if(n == 0) return 1;

	if(mem[n] != -1){
		return mem[n];
	}

	mem[n] = powerOfTwo(n-1) + powerOfTwo(n-1);
	return mem[n];
}

int main(){
	int n; cin >> n;

	for(int i = 0; i <= n; i++){
		mem[i] = -1;
	}
	cout << powerOfTwo(n) << "\n";
	return 0;
}