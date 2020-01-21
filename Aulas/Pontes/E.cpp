#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    int vet[n];

    for(int i = 0; i < n; ++i) {
        cin>>vet[i];
    }

    sort(vet, vet+n);

    set<int> saida;

    for(int i = 0; i < n; ++i) {
        if(vet[i]-1 > 0 && saida.count(vet[i]-1) == 0) {
            saida.insert(vet[i]-1);
        }
        else if(saida.count(vet[i]) == 0) {
            saida.insert(vet[i]);
        }
        else if(vet[i]+1 <= 150001 && saida.count(vet[i]+1) == 0) {
            saida.insert(vet[i]+1);
        }
    }

    cout<<saida.size()<<endl;
}

