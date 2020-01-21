#include <bits/stdc++.h>
#define MAX 200010
using namespace std;

int vet[MAX];
int n;

int busca (int i) {

    int ini = 0;

    int fim = n-1;

    int ultimo = -1;

    while(ini <= fim) {
        int meio = (fim + ini)/2;

        if(vet[meio] >= i){

            fim = meio - 1;

            ultimo = meio;

        }
        else {
            ini = meio + 1;
        }

    }

    if(ultimo != -1) vet[ultimo] = 0;

    return ultimo;


}

int main() {

    memset(vet, 0, sizeof(vet));

    cin>>n;

    for(int i = 0; i < n; i ++) {
        cin>>vet[i];
    }

    sort(vet, vet+n);

    int aux, saida = 0;

    for(int i = 1; i <= n; i++) {

        aux = busca(i);

        if(aux != -1) saida++;

    }

    cout<<saida<<endl;

}

