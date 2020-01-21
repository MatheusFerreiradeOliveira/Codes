#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e6 + 10;

long long k, n;
long long int vet[INF];
//pair<int, int> grau[INF];
vector<long long int> visinhos[INF];

void busca(int i) {

    int ini = i;
    int fim = n -1;

    while(fim >= ini) {

        int meio = (fim+ini)/2;

        if(vet[i]*k == vet[meio]){
            visinhos[i].push_back(meio);
            visinhos[meio].push_back(i);
            break;
        }
        else if(vet[i]*k > vet[meio]) {
            ini = meio+1;
        }
        else
            fim = meio-1;
    }

}

int visit[INF];
int escrito[INF];
int saida = 0, tamanho = 1;

void dfs(int v) {

    visit[v] = 1;

    for(auto x : visinhos[v]){

        if(visit[x] != 0) continue;

        tamanho++;

        dfs(x);
    }

}

int main() {
    memset(visit, 0, sizeof(visit));
    memset(escrito, 0, sizeof(escrito));

    cin>>n>>k;

    for(int i = 0; i < n; i++) {
        cin>>vet[i];
    }

    sort(vet, vet+n);

    int runner;

    int cont1 = 0, cont2 = 0;

    for(int i = 0; i < n; i++) {
        busca(i);
    }

    for(int i = 0; i < n; i++) {

        if(visit[i] == 0)
            dfs(i);

        saida += tamanho/2;
        tamanho = 1;
    }

    cout<<n - saida<<endl;

    return 0;
}
