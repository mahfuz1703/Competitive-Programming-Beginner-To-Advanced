/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah
                                                
#include<bits/stdc++.h>
using namespace std;
                            
typedef long long ll;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mx = 100000001;
vector <ll> v(mx);
void all(){
    ll sum = 0;
    for(int i = 0; i < mx; i++){
        sum += i;
        v[i] = sum;
    }
}                             
void somadhan(){
    ll n; cin >> n;
    if(binary_search(v.begin(), v.end(), n)){
        cout << lower_bound(v.begin(), v.end(), n) - v.begin() << "\n";
    }else cout << "NAI\n";
}
int main(){
    FASTER

    all();    
    int t = 1;
    cin >> t;
    while(t--){
        somadhan();
    }
    return 0;
}
/// Alhamdulilla for everything