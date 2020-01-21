#include <bits/stdc++.h>
using namespace std;
#define MAX 100010;


const double desvio = 1e-4;
const double pi = 3.1416;

int n, f;
double vet[MAX];

int bb() {

    int ini = 1;
    int fim = f;
    int minimo;

    double val = (vet[ini] + vet[fim])/2;

    while(ini < fim) {

        for(int i = 0; i < n; i++) {
            saida += vet[i]/val;
        }

        if(saida >= f){
            minimo = saida;
            fim = meio -1;
        }
    }

}

int main(){

    printf("%.4f ", 1 + desvio);

    int w;

    cin>>w;

    while(w--) {
        cin>>n>>f;
        f++;

        double aux;

        for(int i = 0; i < n; i++) {
            cin>>aux;
            vet[i] = aux*aux*pi;
        }

        sort(vet, vet+n);


        bb();

    }



}
