/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

// Problem - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=72

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
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
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define sqr(a) ((a) * (a))
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define print(x) cout << x << "\n"

int nThUglyNumber(int n){
    int dp[n];
    int two = 0, three = 0, five = 0;
    int nextMultipleOf2 = 2;
    int nextMultipleOf3 = 3;
    int nextMultipleOf5 = 5;

    int nextUglyNumber = 1;
    for(int i = 1; i < n; i++){
        nextUglyNumber = min(
            nextMultipleOf2,
            min(nextMultipleOf3, nextMultipleOf5)
        );

        dp[i] = nextUglyNumber;

        if(nextUglyNumber == nextMultipleOf2){
            two++;
            nextMultipleOf2 = dp[two] * 2;
        }
        if(nextUglyNumber == nextMultipleOf3){
            three++;
            nextMultipleOf3 = dp[three] * 3;
        }
        if(nextUglyNumber == nextMultipleOf5){
            five++;
            nextMultipleOf5 = dp[five] * 5;
        }
    }

    return nextUglyNumber;
}
int main(){
    FASTER

    // int time = clock();
    int t = 1;
    // cin >> t;
    while(t--){
        cout << "The 1500'th ugly number is " << nThUglyNumber(1500) << ".\n";
        // 859963392
    }
    // cerr << (1.0 * clock() - time) / CLOCKS_PER_SEC << "\n"; 
    return 0;
}

/// Alhamdulilla for everything