#include <bits/stdc++.h>
using namespace std;

int main() {

    int tam, n;

    cin>>tam>>n;

    int vet[n];

    for(int i = 0; i < n; i++) {
        cin>>vet[i];
    }

    sort(vet, vet+n);

    int saida = 0;

    if(n < 2){
        int aux1 = vet[0];

        saida = max(aux1 - 1, tam - aux1);
    }
    else {
        for(int i = 0; i < n; i++) {
            if(i == 0){
                int aux = (vet[i+1] - (1 + vet[i]));
                if(aux % 2 == 1) aux++;
                saida = max(vet[i] - 1, aux/2);
            }
            else if(i < n - 1) {
                int aux1 = vet[i] - (vet[i-1] + 1);
                int aux2 = (vet[i+1] - (1 + vet[i]));

                if(aux1%2 == 1) aux1++;
                if(aux2%2 == 1) aux2++;

                saida = max(saida, max(aux1/2, aux2/2));
            }
            else {
                int aux1 = vet[i] - (vet[i-1] + 1);

                if(aux1%2 == 1) aux1++;

                saida = max(saida, max(aux1/2, tam - vet[i]));
            }
        }
    }



    cout<<saida<<endl;

}
