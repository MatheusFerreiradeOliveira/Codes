#include <bits/stdc++.h>
#define MAX 1000010
using namespace std;

int vet[MAX];
int n, m;

int busca(int v) {

    int ini = 0;
    int fim = n-1;
    int ans = 0;
    while(ini <= fim) {
        int meio = (ini+fim)/2;
        if(vet[meio] < v){
            ans = meio+1;
            ini = meio + 1;
        }
        else
            fim = meio - 1;
    }
    return ans;
}

int main() {

    cin>>n>>m;

    for(int i = 0; i < n; i++) {
        cin>>vet[i];
    }

    sort(vet, vet+n);

    while(m--) {
        int aux;
        cin>>aux;

        int saida = 0;

        saida = busca(aux);

        //if(saida > 0) saida++;

        cout<<saida<<endl;

    }

}



