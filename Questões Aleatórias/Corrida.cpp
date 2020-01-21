#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, aux;

    cin>>n>>m;

    pair<int, int> vet[n];

    //memset(vet, 0, sizeof vet);

    for(int i = 0; i < n; i++) {
        vet[i].second = i+1;
        for(int j = 0; j < m; j++) {
            cin>>aux;
            vet[i].first += aux;
        }
    }

    sort(vet, vet+n);

    for(int i = 0; i < 3; i++) {
        cout<<vet[i].second<<endl;
    }
}

