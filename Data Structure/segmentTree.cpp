#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define mx 100001
int arr[mx];
int tree[mx * 3];

void build(int node, int begin, int end){
    if(begin == end) {
        tree[node] = arr[begin]; // leaf node e aci
        return;
    }

    int left = 2 * node;
    int right = 2 * node + 1;
    int mid = (begin+end)/2;

    build(left, begin, mid); // go to left node
    build(right, mid + 1, end); // go to right node;

    tree[node] = tree[left] + tree[right]; // parent node = left child node + right child node // find sum of a range
    // tree[node] = min(tree[left], tree[right]); // find minimum value of a range
    // tree[node] = max(tree[left], tree[right]); // find maximum value of a range
}

int query(int node, int begin, int end, int i, int j){
    if(i > end or j < begin) return 0; // range go to outside of given range // find sum of a range
    // if(i > end or j < begin) return INT_MAX; // find minimum value of a range
    // if(i > end or j < begin) return INT_MIN; // find maximum value of a range
    
    if(begin >= i and end <= j) return tree[node]; // relavent segment

    int left = node * 2;
    int right = (node * 2) + 1;
    int mid = (begin + end) / 2;

    int l = query(left, begin, mid, i , j); // go to left node
    int r = query(right, mid + 1, end, i , j); // go to right node

    return l + r; // find sum of a range
    // return min(l, r); // find minimum value of a range
    // return max(l, r); // find maximum value of a range
}

void update(int node, int begin, int end, int i, int value){
    if(begin > i or end < i) return; // irrelavant segment

    if(begin >= i and end <= i){ // relavent segment
        tree[node] = value;
        return;
    }

    int left = node * 2;
    int right = (node * 2) + 1;
    int mid = (begin + end) / 2;
    update(left, begin, mid, i, value); // go to left node
    update(right, mid + 1, end, i, value); // go to right value

    tree[node] = tree[left] + tree[right]; // find sum of a range
    // tree[node] = min(tree[left], tree[right]); // find minimum value of a range
    // tree[node] = max(tree[left], tree[right]); // find maximum value of a range
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i];

    build(1, 1, n);
    cout << tree[1] << "\n"; // total sum of array

    cout << query(1, 1, n, 2, 4) << endl; // sum of a range

    update(1, 1, n, 2, 20); // update value of a index
    cout << query(1, 1, n, 2, 4) << endl;

    cout << tree[1] << "\n";

    return 0;
}

/// Jokhon akti array er index 0 theke start hobe then node 1 theke start hobe but other sob 0 theke start hobe abd and end hobe n-1;