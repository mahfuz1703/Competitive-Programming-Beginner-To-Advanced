/// In the name of ALLAH

#include <bits/stdc++.h>
using namespace std;
#define ll long long;


int mem[1000007];
int fibonacci(int n){ // complexity O(n);
	if(n <= 1) return n;

	if(mem[n] != -1){
		return mem[n];
	}

	mem[n] = fibonacci(n-1) + fibonacci(n-2);
	return mem[n];
}

int main(){
	int n; cin >> n;

	for(int i = 0; i <= n; i++){
		mem[i] = -1;
	}
	cout << fibonacci(n) << "\n";
	return 0;
}