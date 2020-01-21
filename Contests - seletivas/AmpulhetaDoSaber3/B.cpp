#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

int vet[MAX];
int maior = 0;
int n, m;
int saidaF = 0;

int busca(){

    int ini = 0;
    int fim = maior;

    while(ini <= fim) {

        int cont = 0;

        int meio = (ini+fim)/2;

        //cout<<"MEIO = "<<meio<<"FIM = "<<fim<<"INI = "<<ini<<endl;

        for(int i = 0; i < n; i++) {
            if(vet[i] >= meio){
                cont += (vet[i]/meio);
            }
        }
        if(cont >= m){
            saidaF = meio;
            ini = meio + 1;
        }
        else {
            fim = meio - 1;
        }
    }

    return 0;
}

int main(){

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        cin>>vet[i];
        if(vet[i] > maior)
            maior = vet[i];
    }

    sort(vet, vet+n);

    busca();

    printf("%d", saidaF);

}

