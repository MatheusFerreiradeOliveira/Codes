#include <bits/stdc++.h>
using namespace std;

const int GG = 100010;
const int INF = 1e9+10;

int t[4*GG];

int a[GG];

void build(int i, int l, int r) {
	if (l == r) {
		t[i] = a[l];
	} else {
		int m = (l+r)/2;
		build(2*i, l, m);
		build(2*i+1, m+1, r);
		t[i] = min(t[2*i], t[2*i+1]);
	}
}

int query(int i, int l, int r, int ql, int qr) {
	if (ql <= l && r <= qr) return t[i];
	if (qr < l || r < ql) return INF;
	int m = (l+r)/2;
	return min(query(2*i, l, m, ql, qr), query(2*i+1, m+1, r, ql, qr));
}

int main() {


    int q, cont = 0;

    scanf("%d", &q);

    while(q--) {
        int n, m;

        scanf("%d %d", &n, &m);

        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }

        build(1, 0, n-1);

        printf("Scenario #%d:\n", ++cont);

        for(int i = 0; i < m; i++) {
            int ql, qr;
            scanf("%d %d", &ql, &qr);
            printf("%d\n", query(1, 0, n-1, ql-1, qr-1));
        }
    }

    return 0;
}

