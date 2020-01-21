#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 10;
int memo[4005][3];
int vet[3];

int pd(int n, int i) {

    if(n < 0) return -INF;

    if(n == 0) return 0;

    if(i >= 3) return -INF;

    int &pdm = memo[n][i];
    if(pdm != -1) return pdm;

    return pdm = max(pd(n, i+1), 1 + pd(n-vet[i], i));

}

int main() {

    memset(memo, -1, sizeof(memo));

    int n;

    cin>>n>>vet[0]>>vet[1]>>vet[2];

    cout<<pd(n, 0)<<endl;

}
