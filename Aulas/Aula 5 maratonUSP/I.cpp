#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

long long int n, m, k;
long long int vet[MAX];
long long int vetAux[MAX];
long long int qtd[MAX];

struct Operation{
    long long int ini, fim, d;
};

Operation op[MAX];

int main() {

    memset(vetAux, 0, sizeof vetAux);
    memset(qtd, 0, sizeof qtd);

    cin>>n>>m>>k;

    for(int i = 1; i <= n; i++) {
        cin>>vet[i];
    }

    for(int i =1; i <= m; i++) {
        cin>>op[i].ini>>op[i].fim>>op[i].d;
    }

    pair<long long int, long long int> queries;

    for(int i = 1; i <= k; i++) {
        cin>>queries.first>>queries.second;

        qtd[queries.first] ++;

        if(queries.second + 1 <= m)
            qtd[queries.second+1] --;
    }

    for(int i = 2; i <= m; i++) {
        qtd[i] += qtd[i-1];
    }

    for(int i = 1; i <= m; i++) {
        op[i].d *= qtd[i];
    }

    for(int i = 1; i <= m; i++) {
        vetAux[op[i].ini] += op[i].d;

        if(op[i].fim + 1 <= n)
            vetAux[op[i].fim + 1] -= op[i].d;
    }


    for(int i = 2; i <= n; i++) {
        vetAux[i] += vetAux[i-1];
    }

    for(int i = 1; i <= n; i++) {
        vet[i] += vetAux[i];
        cout<<vet[i]<<" ";
    }
    cout<<endl;
}
