#include <bits/stdc++.h>
using namespace std;

const int N = 112345;

const int INF = 1e9+7;

int tsum[4*N];
int tmax[4*N];
int tmin[4*N];

int a[N];

void build1(int i, int l, int r) {
	if (l == r) {
		tsum[i] = a[l];
	} else {
		int m = (l+r)/2;
		build1(i<<1, l, m);
		build1((i<<1)+1, m+1, r);
		tsum[i] = tsum[i<<1] + tsum[(i<<1)+1];
	}
}

int query1(int i, int l, int r, int ql, int qr) {
	if (ql <= l && r <= qr) return tsum[i];
	if (qr < l || r < ql) return 0;
	int m = (l+r)/2;
	return query1(i<<1, l, m, ql, qr)
		 + query1((i<<1)+1, m+1, r, ql, qr);
}

void update1(int i, int l, int r, int p, int x) {
	if (l == r) {
		tsum[i] = x;
	} else {
		int m = (l+r)/2;
		if (p <= m) update1(i<<1, l, m, p, x);
		else update1((i<<1)+1, m+1, r, p, x);
		tsum[i] = (tsum[i<<1] +  tsum[(i<<1)+1]);
	}
}

//MAX

void build2(int i, int l, int r) {
	if (l == r) {
		tmax[i] = a[l];
	} else {
		int m = (l+r)/2;
		build2(i<<1, l, m);
		build2((i<<1)+1, m+1, r);
		tmax[i] = max(tmax[i<<1], tmax[(i<<1)+1]);
	}
}

int query2(int i, int l, int r, int ql, int qr) {
	if (ql <= l && r <= qr) return tmax[i];
	if (qr < l || r < ql) return -INF;
	int m = (l+r)/2;
	return max(query2(2*i, l, m, ql, qr)
		 , query2(2*i+1, m+1, r, ql, qr));
}

void update2(int i, int l, int r, int p, int x) {
	if (l == r) {
		tmax[i] = x;
	} else {
		int m = (l+r)/2;
		if (p <= m) update2(i<<1, l, m, p, x);
		else update2((i<<1)+1, m+1, r, p, x);
		tmax[i] = max(tmax[i<<1], tmax[(i<<1)+1]);
	}
}

//MIN

void build3(int i, int l, int r) {
	if (l == r) {
		tmin[i] = a[l];
	} else {
		int m = (l+r)/2;
		build3(i<<1, l, m);
		build3((i<<1)+1, m+1, r);
		tmin[i] = min(tmin[i<<1], tmin[(i<<1)+1]);
	}
}

int query3(int i, int l, int r, int ql, int qr) {
	if (ql <= l && r <= qr) return tmin[i];
	if (qr < l || r < ql) return INF;
	int m = (l+r)/2;
	return min(query3(i<<1, l, m, ql, qr)
		 , query3((i<<1)+1, m+1, r, ql, qr));
}

void update3(int i, int l, int r, int p, int x) {
	if (l == r) {
		tmin[i] = x;
	} else {
		int m = (l+r)/2;
		if (p <= m) update3(i<<1, l, m, p, x);
		else update3((i<<1)+1, m+1, r, p, x);
		tmin[i] = min(tmin[i<<1], tmin[(i<<1)+1]);
	}
}

int main() {

    int n, q;

    cin>>n>>q;
        //memset(t, 0, sizeof t);

        for(int i = 1; i <= n; ++i) {
            scanf("%d", &a[i]);
        }

        build1(1, 1, n);
        build2(1, 1, n);
        build3(1, 1, n);

        int m;

        int ql, qr, p, x;

        //if(cont >= 1) printf("\n");

        while(q--) {
            cin>>m;
            if(m == 1) {
                scanf("%d %d", &ql, &qr);
                int x1, x2, x3;
                x1 = query1(1, 1, n, ql, qr);
                x2 = query2(1, 1, n, ql, qr);
                x3 = query3(1, 1, n, ql, qr);
                //cout<<x1<<" "<<x2<<" "<<x3<<endl;
                printf("%d\n", x1 - (x2 + x3));
            }
            else {
                scanf("%d %d", &p, &x);
                update1(1, 1, n, p, x);
                update2(1, 1, n, p, x);
                update3(1, 1, n, p, x);
            }
        }
    return 0;
}
