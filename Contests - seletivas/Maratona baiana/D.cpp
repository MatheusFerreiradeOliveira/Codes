#include <bits/stdc++.h>
using namespace std;

int main () {

    int vet[3];
    int vetAux[3];
    char saida[3];
    char runner[3];

    cin>>vet[0]>>vet[1]>>vet[2];

    vetAux[0] = vet[0];
    vetAux[1] = vet[1];
    vetAux[2] = vet[2];

    sort(vet, vet+3);

    // 12 meses 30 dias n anos;

    if(vet[0] <= 12 && vet[1] <= 30) {
        if(vet[0] <=12 && vet[1] <= 12) {
            cout<<"ambigua"<<endl;
        }
        else if(vet[1] <= 30 && vet[2] <= 30){
            cout<<"ambigua"<<endl;
        }
        else {
           runner[0] = 'm';
            runner[1] = 'd';
            runner[2] = 'a';
            for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 3; j++) {
                    if(vetAux[i] == vet[j]){
                        saida[i] = runner[j];
                    }
                }
            }

            cout<<saida[0]<<"-"<<saida[1]<<"-"<<saida[2]<<endl;
        }


    }
    else {
        cout<<"invalida"<<endl;
    }

}




