/// In the name of ALLAH
/// La ilaha illallah Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dekhaw(x) cout << x << "\n"

void somadhan(){
    set<int> s;
	int q; cin >> q;
	while(q--){
		char c; cin >> c;
		if(c == 'a'){
			int x; cin >> x;
			s.insert(x);
		}
		else if(c == 'b'){
			for(auto u : s) cout << u << " ";
		}
		else if(c == 'c'){
			int x; cin >> x;
			s.erase(x);
		}
		else if(c == 'd'){
			set <int>::iterator it = s.begin();
            int x; cin >> x;
            it = s.find(x);
            if(it != s.end()) cout << 1 << " ";
            else cout << -1 << " ";
		}
        else cout << s.size() << " ";
		
	}
    cout << "\n";
}
int main(){
    FASTER

    int t; cin >> t;
    while(t--){
        somadhan();
    }
    return 0;
}

/// Alhamdulilla for everything