#include <bits/stdc++.h>
#define MAXN 100010
using namespace std;

int vet[MAXN];
int memo[MAXN];

int pd(int i, int aux[], int limit) {

    if(i >= limit) return 0;

    if(memo[i] != -1) return memo[i];

    return memo[i] = max(pd(i+1, aux, limit), aux[i] + pd(i+2, aux, limit));
}

int main() {

    int n, m;

    while(cin>>n>>m && n!=0 && m!=0){
        int vetA[m];

        for(int i = 0; i < n; i++) {
            memset(memo, -1, sizeof memo);
            memset(vetA, 0, sizeof vetA);
            for(int j = 0; j < m; j++) {
                cin>>vetA[j];
            }
            vet[i] = pd(0, vetA, m);
        }

        memset(memo, -1, sizeof memo);

        cout<<pd(0, vet, n)<<endl;
    }



}
