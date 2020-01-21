#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+10;
int arr[MAX];
int tree[4*MAX];

void build (int no, int l, int r) {
    if(l == r) {
        tree[no] = arr[l];
    }
    else {
        int m = (l+r)/2;
        build(no<<1, l, m);
        build((no<<1)+1, m+1, r);
        tree[no] = tree[no<<1] + tree[(no<<1)+1];
    }
}

void update(int no, int l, int r, int id) {
    if(l == r) {
        tree[no] = 0;
    }
    else {
        int m = (l+r)/2;
        if(id <= m) update(no<<1, l, m, id);
        else update((no<<1)+1, m+1, r, id);
        tree[no] = tree[no<<1] + tree[(no<<1)+1];
    }
}

int query(int no, int l, int r, int ql, int qr) {
    if(ql <= l && r <= qr) return tree[no];
    else if(r < ql || qr < l) return 0;
    else {
        int m = (l+r)/2;
        return query(no<<1, l, m, ql, qr)
                + query((no<<1)+1, m+1, r, ql, qr);
    }
}

int main() {
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++) {
        cin>>arr[i];
    }
    build(1, 1, n);
    char q;
    while(cin>>q) {
        int i;
        cin>>i;

        if(q == '?') {
            printf("%d\n", query(1, 1, n, 1, i-1));
        }
        else {
            update(1, 1, n, i);
        }
    }
}
