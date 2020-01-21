#include <bits/stdc++.h>
using namespace std;

struct Galho {
    int h = 0, e = 0, r = 0;
};


const int MAX = 1e5+10;
Galho tree[4*MAX];
Galho arr[MAX];
int lazy[4*MAX];

void build(int no, int l, int r) {
    if(l == r) {
        tree[no] = arr[l];
    }
    else {
        int m = (l+r)/2;
        build(no<<1, l, m);
        build((no<<1)+1, m+1, r);
        tree[no].h = tree[no<<1].h + tree[(no<<1)+1].h;
        tree[no].e = tree[no<<1].e + tree[(no<<1)+1].e;
        tree[no].r = tree[no<<1].r + tree[(no<<1)+1].r;
    }
}

void push(int no, int l, int r) {
    if(lazy[no]) {
        if(lazy[no]%3 == 1){
            int aux = tree[no].e;
            tree[no].e = tree[no].h;
            tree[no].h = tree[no].r;
            tree[no].r = aux;
        }
        else if(lazy[no]%3 == 2) {
            int aux = tree[no].r;
            tree[no].r = tree[no].h;
            tree[no].h = tree[no].e;
            tree[no].e = aux;
        }
        if(l != r) {
            lazy[no<<1] += lazy[no];
            lazy[(no<<1)+1] += lazy[no];
        }
        lazy[no] = 0;
    }
}

void update(int no, int l, int r, int ql, int qr) {
    push(no, l, r);
    if(r < ql || qr < l) return;

    else if(ql <= l && r <= qr) {
        lazy[no]++;
        push(no, l, r);
    }
    else {
        int m = (l+r)/2;
        update(no<<1, l, m, ql, qr);
        update((no<<1)+1, m+1, r, ql, qr);
        tree[no].h = tree[no<<1].h + tree[(no<<1)+1].h;
        tree[no].e = tree[no<<1].e + tree[(no<<1)+1].e;
        tree[no].r = tree[no<<1].r + tree[(no<<1)+1].r;
    }
}

Galho query(int no, int l, int r, int ql, int qr) {
    push(no, l, r);
    if(r < ql || qr < l) {
        Galho a;
        return a;
    }
    if(ql <= l && r <= qr) return tree[no];
    int m = (l+r)/2;
    Galho mds1 = query(no<<1, l, m, ql, qr);
    Galho mds2 = query((no<<1)+1, m+1, r, ql, qr);
    Galho mds3;
    mds3.h = mds1.h + mds2.h;
    mds3.e = mds1.e + mds2.e;
    mds3.r = mds1.r + mds2.r;
    return mds3;
}

int main() {

    int n, m;
    while(scanf("%d %d", &n, &m) != EOF) {

        memset(lazy, 0, sizeof lazy);

        for(int i = 1; i <= n; ++i) {
            arr[i].h = 1;
            arr[i].e = 0;
            arr[i].r = 0;
        }

        build(1, 1, n);

        while(m--) {
            char a;
            int ql, qr;
            cin>>a;
            scanf("%d %d", &ql, &qr);
            if(a == 'C'){
                Galho aux = query(1, 1, n, ql, qr);
                printf("%d %d %d\n", aux.h, aux.e, aux.r);
            }
            else {
                update(1, 1, n, ql, qr);
                /*for(int i = 1; i <= 21; i++) {
                    printf("%d %d %d\n", tree[i].h, tree[i].e, tree[i].r);
                }
                printf("------------------------\n");*/
            }
        }
        printf("\n");
    }
}
