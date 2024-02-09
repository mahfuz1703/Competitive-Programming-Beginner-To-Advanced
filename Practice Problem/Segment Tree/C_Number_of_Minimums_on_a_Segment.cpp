/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

// Problem - https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/C

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

pair<int,int> INF = {1e9+90 , 1} ;
vector<pair<int,int>> tree(mx*4, {0,0});

pair<int,int> operation(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first){
        return make_pair(a.first , a.second + b.second) ;
    }
    else if(a.first < b.first){
        return a ;
    }
    else return b ;
}

void build(int node, int begin, int end){
    if(begin == end) {
        tree[node] = {arr[begin], 1};
        return;
    }

    int left = node * 2, right = node * 2 + 1;
    int mid = (begin + end) / 2;

    build(left, begin, mid);
    build(right, mid+1, end);

    tree[node] = operation(tree[left], tree[right]);
}

pair<int, int> query(int node, int begin, int end, int i, int j){
    if(i > end or j < begin) return INF;
    
    if(begin >= i and end <= j) return tree[node];

    int left = node * 2, right = node * 2 + 1;
    int mid = (begin + end) / 2;

    return operation(query(left, begin, mid, i, j), query(right, mid + 1, end, i, j));
}

void update(int node, int begin, int end, int i, int value){
    if(begin > i or end < i) return;

    if(begin >= i and end <= i){
        tree[node] = {value, 1};
        return;
    }

    int left = node * 2, right = node * 2 + 1;
    int mid = (begin + end) / 2;

    update(left, begin, mid, i, value);
    update(right, mid + 1, end, i, value);

    tree[node] = operation(tree[left], tree[right]);
}

void solve(){
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    build(1, 0, n-1);
    while(m--){
        int op; cin >> op;

        if(op == 1){
            int i, v; cin >> i >> v;
            update(1, 0, n-1, i, v);
        }else{
            int l, r; cin >> l >> r;
            r--;
            pair<int, int> ans = query(1, 0, n-1, l, r);
            cout << ans.first << " " << ans.second << '\n';
        }
    }
}
int main(){
    FASTER

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

/// Alhamdulilla for everything