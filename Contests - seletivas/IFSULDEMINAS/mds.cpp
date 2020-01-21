#include <bits/stdc++.h>
using namespace std;

const int MAX = 100005;

int t[4*MAX];

int a[MAX];

void build(int i, int l, int r) {
	int esq = i<<1;
    int dir = (i<<1)+1;
	if (l == r) {
		t[i] = a[l];
	} else {
		int m = ((l+r)>>1);
		build(esq, l, m);
		build(dir, m+1, r);
		t[i] = min(t[esq], t[dir]);
	}
}

int query(int i, int l, int r, int x, int ql, int qr) {
    int m = ((l+r)>>1);
    int esq = i<<1;
    int dir = (i<<1)+1;

	if (qr < l || r < ql) return 0;

	else if (ql <= l && r <= qr) {
        if(t[i] > x) return r - l + 1;
        else if(l != r){
            return query(esq, l, m, x, ql, qr)
                + query(dir, m+1, r, x, ql, qr);
        }
        return 0;
	}
	return query(esq, l, m, x,  ql, qr)
		 + query(dir, m+1, r, x, ql, qr);
}

void update(int i, int l, int r, int p, int x) {

    int esq = i<<1;
    int dir = (i<<1)+1;

	if (l == r) {
		t[i] = x;
	} else {
		int m = ((l+r)>>1);
		if (p <= m) update(esq, l, m, p, x);
		else update(dir, m+1, r, p, x);
		t[i] = min(t[esq], t[dir]);
	}
}

int main() {

    int n, m;

    scanf("%d %d", &n, &m);

    for(int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }

    build(1, 1, n);
    while(m--) {
        int aa, b, c, d;

        scanf("%d", &aa);

        if(aa == 1) {
            scanf("%d %d", &b, &c);
            update(1, 1, n, b, c);
        }
        else {
            scanf("%d %d %d", &b, &c, &d);
            printf("%d\n", query(1, 1, n, b, c, d));
        }
    }
}

