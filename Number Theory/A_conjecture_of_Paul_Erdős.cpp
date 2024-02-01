/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah
/// Problem - https://www.spoj.com/problems/HS08PAUL/
                                                
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
bitset<mx> isPrime;
int ans[mx];
void primeGenerate(int n){
    isPrime[1] = 0;
    isPrime[2] = 1;
    for(int i = 3; i <= n; i += 2) isPrime[i] = 1;

    int sq = sqrt(n);
    for(int i = 3; i <= sq; i += 2){
        if(isPrime[i] == 1){
            for(int j = i*i; j <= n; j += (i+i)){
                isPrime[j] = 0;
            }
        }
    }
}
void oky(){
    for(int x = 1; x <= 3200; x++){
        for(int y = 1; y <= 60; y++){
            int a = (x*x) + (y*y*y*y);
            if(a > mx) continue;
            
            if(isPrime[a] == 1) ans[a] = 1;
        }
    }
    for(int i = 1; i <= mx; i++) ans[i] += ans[i-1];
}
void testCase(){
    int n; cin >> n;
    cout << ans[n] << "\n";
}
int main(){
    FASTER
    primeGenerate(mx);
    oky();
                 
    int t = 1;
    cin >> t;
    while(t--){
        testCase();
    }
    return 0;
}
/// Alhamdulilla for everything