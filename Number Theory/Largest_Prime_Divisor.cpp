/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah
// Problem - https://vjudge.net/problem/UVA-11466

#include<bits/stdc++.h>
using namespace std;
                            
typedef long long ll;
typedef map<int, int> mi;
typedef map<ll, ll> mll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
                            
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
                                        
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
                                
const int mx = 1e7+123;
bitset <mx> isPrime;
vector <int> prime;
void primeGenerate(int n){
    isPrime[1] = 0;
    for(int i = 3; i <= n; i += 2) isPrime[i] = 1;

    int sq = sqrt(n);
    for(int i = 3; i <= sq; i += 2){
        if(isPrime[i] == 1){
            for(int j = i*i; j <= n; j += (i+i)){
                isPrime[j] = 0;
            }
        }
    }

    isPrime[2] = 1;
    prime.push_back(2);
    for(int i = 3; i <= n; i += 2){
        if(isPrime[i] == 1) prime.push_back(i);
    }
}

vector< ll > primeFactorization(ll  n){
    vector <ll> rest;
    for(auto p : prime){
        if(1LL * p * p > n) break;

        if(n % p == 0){
            while(n % p == 0){
                rest.push_back(p);
                n /= p;
            }
        }
    }
    if(n > 1) rest.push_back(n);

    return rest;
}
int main(){
    FASTER

    primeGenerate(mx); 
    
    ll n;
    while(cin >> n){
        if(n == 0) break;

        vector <ll> ans = primeFactorization(abs(n));
        ll sz = unique(all(ans)) - ans.begin();

        if(sz < 2) cout << "-1\n";
        else cout << ans.back() << "\n";
    }
    return 0;
}
/// Alhamdulilla for everything