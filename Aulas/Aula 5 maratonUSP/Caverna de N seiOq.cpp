#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, t;

    cin>>n>>t;

    int vet[n];

    for(int i = 0; i < n; i++) {
        cin>>vet[i];
    }

    vet[0] = min(vet[0], t - vet[0]);
    bool deucerto = true;
    long long saida = vet[0];

    for(int i = 1; i < n; i++) {

        if(min(vet[i], t - vet[i]) >= vet[i-1])
            vet[i] = min(vet[i], t - vet[i]);
        else if(max(vet[i], t - vet[i]) >= vet[i-1])
            vet[i] = max(vet[i], t - vet[i]);
        else{
            deucerto = false;
            break;
        }
        saida += vet[i];
    }

    if(deucerto)
        cout<<saida<<endl;
    else
        cout<<-1<<endl;

}
