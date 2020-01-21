#include <bits/stdc++.h>
using namespace std;

int vet[100010];
int prefix_sum[100010];
int n,m;

// To pensando em começar de I, ai faz N buscas salvando oq cada uma retorna em vencedor ( o max)
// N tem pq olhar antes do cara, já q vai rodar N vezez
int buscaB(int i){
    int ini = i;
    int fim = n-1;

    int saida = -1;

    while(ini <= fim){
        int meio = (fim+ini)/2;

        if(prefix_sum[meio] <= m){
            saida = max(saida, fim-ini);
            break;
        }
        else {
            int ini2 = meio+1;
            int fim2 = n;

            while(ini2 <= fim2){
                int meio2 = (ini2+fim2)/2;

                if(prefix_sum[meio] - prefix_sum[meio2+1] <= m){
                    saida = max(saida, meio2 - meio);
                }
                else

            }




        }
    }

    return saida;
}
int main(){
    memset(prefix_sum, 0, sizeof(prefix_sum));
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>vet[i];
        for(int j = 0; j < i+1; j++){
            prefix_sum[j]+=vet[i];
        }
    }

    int vencedor = 0;//Recebe fim - ini;

    for(int i = 0; i < n; i++){
        vencedor = max(buscaB(i), vencedor);
    }
}
