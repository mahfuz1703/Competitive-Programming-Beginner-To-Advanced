// Problem: You are given a list of 2D integer cordinates. You have to sort them based on their distance from the origin. How will you do it??

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;

	vector<tuple<double, int, int>> v;
	for(int i = 0; i < n; i++){
		int x, y; cin >> x >> y;
		double distance = sqrt(x * x + y * y);
		v.push_back({distance, x, y});
	}
	sort(v.begin(), v.end());

	for(auto [dis, x, y]: v){
		cout << x << " " << y << "\n";
	}
	return 0;
}