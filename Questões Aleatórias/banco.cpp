#include <bits/stdc++.h>
using namespace std;
int main(){
    int ng, n, cont = 0;
    cin>>ng>>n;
    int vet[ng];
    memset(vet, 0, sizeof(vet));
    int chegada, tempo;
    for(int i = 0; i < n; i++){
        cin>>chegada>>tempo;
        if(chegada + 20 < vet[0]){
            cont++;
            //cout<<"Extrapolou tempo max de: "<<chegada+20<<"Pois o medico estava no minuto: "<<vet[0]<<endl;
        }
        if(vet[0] > chegada)vet[0] += tempo;
        else vet[0] = chegada + tempo;

        sort(vet, vet+ng);
    }
    cout<<cont<<endl;
}
