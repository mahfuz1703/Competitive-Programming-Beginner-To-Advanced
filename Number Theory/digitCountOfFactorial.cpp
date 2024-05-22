/// In the name of ALLAH

#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int digitCountFact(int n){
	double sum = 0;
	for(int i = 1; i <= n; i++){
		sum += log10(i);
	}
	return floor(sum) + 1;
}
int main(){
	int n; cin >> n;
	cout << digitCountFact(n) << "\n";
	return 0;
}