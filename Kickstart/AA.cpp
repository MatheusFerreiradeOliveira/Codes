#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+10;
const int MAX = 210;
int vet[MAX];
int memo[MAX][MAX];
int n, K;

int pd(int i, int k, int compara) {

    if(k > K) return INF;

    if(i >= n) return 0;

    if(memo[i][k] != -1) return memo[i][k];

    if(vet[i] == compara) return memo[i][k] = pd(i+1, k, compara);

    return memo[i][k] = min(pd(i+1, k+1, vet[i]),
                min((1 + pd(i+1, k, compara)),
                (1 + pd(i+1, k, vet[i]))));
}


int main() {

    int q;

    cin>>q;

    int cont = 0;

    while(q--){

        cont++;

        memset(memo, -1, sizeof memo);

        cin>>n>>K;
        for(int i = 1; i<=n; ++i) {
            cin>>vet[i];
        }
        cout<<"Case #"<<cont<<": "<<pd(1, 0, vet[1])<<"\n";
    }
}

