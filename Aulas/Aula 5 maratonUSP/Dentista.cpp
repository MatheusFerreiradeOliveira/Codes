#include <bits/stdc++.h>
using namespace std;

bool compara(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second)
        return a.second < b.second;
    return a.first > b.first;
}

int main() {

    int n, a, b;

    cin>>n;

    int saida = 1, saidaF = 0;
    pair<int, int> vet[n];

    for(int i = 0; i < n; i++) {
        cin>>vet[i].first>>vet[i].second;
    }

    int fst, lst;

    sort(vet, vet+n, compara);

    fst = vet[0].first;
    lst = vet[0].second;

    for(int j = 1; j < n; j++) {
        if(vet[j].first >= lst) {
            saida++;
            fst = vet[j].first;
            lst = vet[j].second;
        }
    }

    //saidaF = max(saida, saidaF);

    cout<<saida<<endl;
}

