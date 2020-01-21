#include <bits/stdc++.h>
using namespace std;

int n, D;
int vet[2000010];

int main() {

    scanf("%d %d", &n, &D);

    for(int i = 1; i <= n; i++){
        scanf("%d", &vet[i]);
        vet[n+i] = vet[i];
    }

    int soma = 0;
    int saida = 0;
    int cont = 0;

    for(int i = 1; i <= n; i++) {
        while(cont < (n + i) && soma < D){
            soma += vet[cont];
            cont++;
        }
        if(soma == D)
            saida++;
        soma -= vet[i];
    }
    printf("%d\n", saida);
}

