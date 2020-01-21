#include <bits/stdc++.h>
using namespace std;
int binary(int desejado, int vet[], int n){
    int inicio = 0, fim = n-1, meio;
    while(inicio <= fim){
        meio = (inicio+fim)/2;
        if(vet[meio] == desejado)
            return 1;
        else if(vet[meio] > desejado)
            fim = meio-1;
        else if(vet[meio] < desejado)
            inicio = meio+1;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Tamanho do vet:"<<endl;
    cin>>n;
    int vet[n];
    for(int i = 0; i < n; i++){
        cin>>vet[i];
    }
    sort(vet, vet+n);
    cout<<"Escolha um numero: "<<endl;
    int davez;
    cin>>davez;
    int existe = binary(davez, vet, n);
    if(existe == 1)
        cout<<"Existe"<<endl;
    else
        cout<<"N existe"<<endl;
}
