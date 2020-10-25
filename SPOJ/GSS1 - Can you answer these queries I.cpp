#include <bits/stdc++.h>
#define LL long long int
using namespace std;
int const MAXN = 50000 +9;
LL tree[4*MAXN];
LL a[MAXN];
void build (int node, int start, int end){
    if (start == end){
        tree[node] = a[start];
        return;
    }
    int mid = (start + end)/2;
    build (2*node, start, mid);
    build (2*node + 1, mid + 1, end);
    tree[node] = max ({tree[2*node],tree[2*node+1],tree[2*node]+tree[2*node+1]});
}
int query (int node, int start, int end, int l , int r){
    if (end < l or r < start) return -1e9;
    if (l <= start and end <= r) return tree[node];
    int mid = (start + end) / 2;
    LL ql = query (2*node, start, mid, l, r);
    LL qr = query (2*node + 1 ,mid + 1, end, l, r);
    return max({qr,ql,qr+ql});
}
int main (){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    build (1, 0, n-1);
    while (q--){
        int l, r;
        cin >> l >>r;
        l--,r--;
        cout << query(1, 0, n-1, l, r) << "\n";
    }

}