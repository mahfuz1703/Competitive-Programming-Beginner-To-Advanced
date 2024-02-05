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

    tree[node] = tree[left] + tree[right]; // parent node = left child node + right child node
}

int query(int node, int begin, int end, int i, int j){
    if(i > end or j < begin) return 0; // range go to outside of given range
    
    if(begin >= i and j >= end) return tree[node]; // relavent segment

    int left = node * 2;
    int right = (node * 2) + 1;
    int mid = (begin + end) / 2;

    int r1 = query(left, begin, mid, i , j); // go to left node
    int r2 = query(right, mid + 1, end, i , j); // go to right node

    return r1 + r2;
}

void update(int node, int begin, int end, int i, int value){
    if(i < begin or i > end) return; // irrelavant segment

    if(begin >= i and end <= i){ // relavent segment
        tree[node] = value;
        return;
    }

    int left = node * 2;
    int right = (node * 2) + 1;
    int mid = (begin + end) / 2;
    update(left, begin, mid, i, value); // go to left node
    update(right, mid + 1, end, i, value); // go to right value

    tree[node] = tree[left] + tree[right];
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    build(1, 1, n);

    cout << query(1, 1, n, 1, 3) << endl;
    update(1, 1, n, 3, 100);
    cout << query(1, 1, n, 1, 3) << endl;


    return 0;
}