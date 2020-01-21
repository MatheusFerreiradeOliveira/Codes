#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+10;
long long lazy[4*MAX];
long long tree[4*MAX];

void push(int no, int l, int r) {
    if(lazy[no]) {
        tree[no] += lazy[no] * (r - l + 1);
        if(l != r) {
            lazy[no<<1] += lazy[no];
            lazy[(no<<1)+1] += lazy[no];
        }
        lazy[no] = 0;
    }
}

void update(int no, int l, int r, int ql, int qr, int x) {

    int dir = no<<1;
    int esq = (no<<1)+1;

    push(no, l, r);

    if(qr < l || r < ql) return;

    if(ql <= l && r <= qr) {
        lazy[no] += x;
        push(no, l, r);
    }
    else {
        int m = (l+r)/2;
        update(dir, l, m, ql, qr, x);
        update(esq, m+1, r, ql, qr, x);
        tree[no] = tree[dir] + tree[esq];
    }
}

long long query(int no, int l, int r, int ql, int qr) {

    int dir = no<<1;
    int esq = (no<<1)+1;

    push(no, l, r);

    if(r < ql || qr < l) return 0;

    else if (ql <= l && r <= qr) return tree[no];

    int m = (l+r)/2;

    return query(dir, l, m, ql, qr) +
        query(esq, m+1, r, ql, qr);
}

int main() {

    int t;
    cin>>t;
    while(t--) {
        memset(lazy, 0, sizeof lazy);
        memset(tree, 0, sizeof tree);
        int n, m;
        cin>>n>>m;
        for(int i = 0; i < m; ++i) {
            int q, ql, qr, x;
            scanf("%d", &q);
            if(q == 0) {
                scanf("%d %d %d", &ql, &qr, &x);
                update(1, 1, n, ql, qr, x);
            }
            else {
                scanf("%d %d", &ql, &qr);
                cout<<query(1, 1, n, ql, qr)<<"\n";
            }
        }
    }
}
