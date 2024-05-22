/// In the name of ALLAH

#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int trailingZeroCount(int n){
	int cnt = 0;
	int tmp = 5;
	while(n / tmp >= 1){
		cnt += n / tmp;
		tmp *= 5;
	}
	return cnt;
}

int main(){
	int n; cin >> n;
	cout << trailingZeroCount(n) << "\n";

	return 0;
}