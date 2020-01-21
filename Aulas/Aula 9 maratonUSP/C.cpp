#include <bits/stdc++.h>
using namespace std;

const int MAX = 100005;
int arr[MAX];
int tree[4*MAX];

void build(int no, int l, int r) {
    if(l == r) {
        tree[no] = arr[l];
    }
    else {
        int m = (l+r)>>1;
        build((no<<1), l, m);
        build((no<<1)+1, m+1, r);
        tree[no] = tree[no<<1] * tree[(no<<1)+1];
    }
}

void update(int no, int l, int r, int id, int x) {
    if(l == r)
        tree[no] = x;
    else {
        int m = (l+r)/2;
        if(id <= m) update((no<<1), l, m, id, x);
        else update((no<<1)+1, m+1, r, id, x);
        tree[no] = tree[(no<<1)] * tree[(no<<1)+1];
    }
}

int query(int no, int l, int r, int ql, int qr) {
    if(r < ql || qr < l) return 1;
    if(ql <= l && r <= qr) return tree[no];
    else {
        int m = (l+r)/2;
        return query((no<<1), l, m, ql, qr)
                    * query((no<<1)+1, m+1, r, ql, qr);
    }
}

int main() {
    int n, k;
    while(scanf("%d %d", &n, &k) != EOF) {
        for(int i = 1; i <= n; i++) {
            int lul;
            scanf("%d", &lul);
            if(lul > 0) lul = 1;
            else if (lul < 0) lul = -1;
            arr[i] = lul;
        }
        build(1, 1, n);
        while(k--) {
            char c;
            int ind, x;
            //cin>>c;
            scanf(" %c", &c);
            //printf("%c", c);
            scanf("%d %d", &ind, &x);

            if(c == 'C') {
                if(x > 0) x = 1;
                else if(x < 0) x = -1;
                update(1, 1, n, ind, x);
            }
            else {
                int runner = query(1, 1, n, ind, x);
                if(runner > 0) printf("+");
                else if(runner < 0) printf("-");
                else printf("0");
            }
        }
        printf("\n");
    }
}
