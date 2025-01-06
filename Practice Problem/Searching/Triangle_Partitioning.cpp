// problem: https://lightoj.com/problem/triangle-partitioning

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isPowerOfTwo(int x) {
	return x and (!(x & (x - 1)));
}

double newRatio(double ab, double ad){
	double k = ad / ab;
	double areaRatio = (k * k) / (1 - (k * k));
	return areaRatio;
}

void solve(){
    double ab, ac, bc, ratio; cin >> ab >> ac >> bc >> ratio;

	double l = 0, r = ab, mid;

	int it = 0;
	while(it <= 150){
		mid = (l + r)/2;
		if(newRatio(ab, mid) < ratio){
			l = mid;
		}else r = mid;
		it++;
	}
	cout << fixed << setprecision(10) << mid << "\n";
}

int main(){
	FASTER

	int tt = 1;
	cin >> tt;
	int i = 1;
	while(tt--){
		cout << "Case " << i << ": ";
		solve();
		i++;
	}
}

