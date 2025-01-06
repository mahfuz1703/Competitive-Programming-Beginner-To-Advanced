// problem: https://www.spoj.com/problems/CIRCLE_E/en/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isPowerOfTwo(int x) {
	return x and (!(x & (x - 1)));
}

double area(double a, double b, double c){
	double s = (a + b + c) / 2;
	double ans = sqrt(s * (s - a) * (s - b) * (s - c));
	return ans;
}

void solve(){
    double r1, r2, r3; cin >> r1 >> r2 >> r3;

	double s = area(r1 + r2, r2 + r3, r1 + r3);
	double l = 0, r = 1e9, mid;

	int it = 0;
	while(l <= r){
		if(it >= 150) break;

		mid = (l + r)/2;
		double s1 = area(r1 + r3, r1 + mid, mid + r3);
		double s2 = area(mid + r3, r3 + r2, mid + r2);
		double s3 = area(mid + r2, r2 + r1, r1 + mid);

		if(s1 + s2 + s3 < s){
			l = mid;
		}else r = mid;
		it++;
	}
	cout << fixed << setprecision(6) << mid << "\n";
}

int main(){
	FASTER

	int tt = 1;
	cin >> tt;

	while(tt--){
		solve();
	}
}

