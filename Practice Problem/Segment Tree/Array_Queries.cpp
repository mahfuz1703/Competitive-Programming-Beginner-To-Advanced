/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

// Problem - https://lightoj.com/problem/array-queries

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define pb push_back
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define MOD 1000000007
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << "\n"

#define mx 100001
ll arr[mx];
ll tree[mx * 3];

void build(int node, int begin, int end){
    if(begin == end) {
        tree[node] = arr[begin];
        return;
    }

    int left = node * 2, right = node * 2 + 1;
    int mid = (begin + end) / 2;

    build(left, begin, mid);
    build(right, mid+1, end);

    tree[node] = min(tree[left], tree[right]);
}

ll query(int node, int begin, int end, int i, int j){
    if(i > end or j < begin) return INT_MAX;
    
    if(begin >= i and end <= j) return tree[node];

    int left = node * 2, right = node * 2 + 1;
    int mid = (begin + end) / 2;

    ll l = query(left, begin, mid, i, j);
    ll r = query(right, mid + 1, end, i, j);

    return min(l, r);
}

// void update(int node, int begin, int end, int i, int value){
//     if(begin > i or end < i) return;

//     if(begin >= i and end <= i){
//         tree[node] = value;
//         return;
//     }

//     int left = node * 2, right = node * 2 + 1;
//     int mid = (begin + end) / 2;

//     update(left, begin, mid, i, value);
//     update(right, mid + 1, end, i, value);

//     tree[node] = min(tree[left], tree[right]);
// }

void solve(){
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    
    build(1, 1, n);
    while(m--){
        int l, r; cin >> l >> r;
        ll ans = query(1, 1, n, l, r);
        print(ans);
    }
    
}
int main(){
    FASTER

    int t = 1;
    cin >> t;
    int i = 1;
    while(t--){
        cout << "Case " << i << ":\n";
        solve();
        i++;
    }
    return 0;
}

/// Alhamdulilla for everything