#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 212345;

ll t[4*N];

ll a[N];

void build(int i, int l, int r) {
	if (l == r) {
		t[i] = a[l];
	} else {
		ll m = (l+r)/2;
		build(2*i, l, m);
		build(2*i+1, m+1, r);
		t[i] = t[2*i] + t[2*i+1];
	}
}

ll query(int i, int l, int r, int ql, int qr) {
	if (ql <= l && r <= qr) return t[i];
	if (qr < l || r < ql) return 0;
	int m = (l+r)/2;
	return query(2*i, l, m, ql, qr)
		 + query(2*i+1, m+1, r, ql, qr);
}

void update(int i, int l, int r, int p, int x) {
	if (l == r) {
		t[i] = x;
	} else {
		ll m = (l+r)/2;
		if (p <= m) update(2*i, l, m, p, x);
		else update(2*i+1, m+1, r, p, x);
		t[i] = t[2*i] + t[2*i+1];
	}
}

int main() {

    int n, cont;

    scanf("%d", &n);

        memset(a, 0, sizeof a);
        memset(t, 0, sizeof t);

        for(int i = 1; i <= n; ++i) {
            scanf("%d", &a[i]);
        }

        build(1, 1, n);

        cin>>cont;

        char m;

        int ql, qr, p, x;

        for(int jj = 0; jj < cont; ++jj){
            cin>>m;
            if(m == 'C') {
                scanf("%d %d", &ql, &qr);
                printf("%lld\n", query(1, 1, n, ql, qr));
            }
            else {
                scanf("%d %d", &p, &x);
                update(1, 1, n, p, x);
            }
        }
    return 0;
}

