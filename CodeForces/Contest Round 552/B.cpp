#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

int main() {

    int n;

    cin>>n;

    int dist = 0;
    bool deucerto = true;
    int vet[MAX];
    int nElem = 0;
    int aux[MAX];

    memset(aux, 0, sizeof(aux));

    for(int i = 0; i < n; i++) {
        cin>>vet[i];

        if(aux[vet[i]] == 0) nElem++;
        aux[vet[i]]++;

    }

    sort(vet, vet+n);

    for(int i = 0; i < n - 1; i++) {

        if(dist != 0 && max(vet[i], vet[i+1]) - min(vet[i], vet[i+1]) != dist && max(vet[i], vet[i+1]) - min(vet[i], vet[i+1]) != 0){
            deucerto = false;
        }

        else if (dist == 0){
            dist = max(vet[i], vet[i+1]) - min(vet[i], vet[i+1]);
            //cout<<"Dist = "<<dist<<endl;
        }
    }

    //cout<<dist<<nElem<<endl;

    if(deucerto) {
        if(dist%2 == 0 && nElem == 2)
            dist /= 2;
    }

    sort(vet, vet+n);

    /*for(int i = 1; i < n - 1; i++) {

        if(vet[i] > vet[i-1]) {
            vet[i-1]+=dist;

            if(vet[i] > vet[i-1]) {
                vet[i]-=dist;
            }

            if(vet[i] != vet[i-1])
        }

    }*/

    if(vet[n-1] - vet[0] > dist*2) {
        //cout<<"Ta dando ruim aqui"<<endl;
        deucerto = false;
    }

    if(deucerto) {

        cout<<dist<<endl;

    }

    else {
        cout<<-1<<endl;
    }

}
