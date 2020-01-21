#include <bits/stdc++.h>
#define MAX 10010;
using namespace std;

int id[MAX];
int sz[MAX];

int fnd (int p) {

    if(id[p] == p) return p;

    return id[p] = fnd(id[p]);

}

void uni(int p ,int q) {
    p = fnd(p);
    q = fnd(q);

    if(p==q) return;

    if(sz[p] > sz[q]) swap(p, q);

    id[p] = q;

    sz[q] += sz[p];
}


int main() {

    memset(sz, 0, sizeof(sz));

    int n, m;

    cin>>n>>m;

    for(int i = 0; i < m; i++) {
        id[i] = i;

        sz[i] = 1;


    }

}
