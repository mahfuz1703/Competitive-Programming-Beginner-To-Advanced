#include <bits/stdc++.h>
using namespace std;

int main(){
	string str = "10   20  30  40";

	stringstream custom(str);

	int a, b, c, d;
	custom >> a >> b >> c >> d;

	cout << a << ' ' << b << ' ' << c << ' ' << d << "\n";

	string s = "dskfj dskfjdf ffk dfkdf dfjdkf dkfdf eee dfd";
	stringstream ss(s);

	string word;
	while(ss >> word){
		cout << word << "\n";
	}
}