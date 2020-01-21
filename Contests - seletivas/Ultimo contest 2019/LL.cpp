#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    int vet[n+1];

    memset(vet, 0, sizeof vet);

    for(int i = 1; i <= n; ++i) {
        cin>>vet[i];
        vet[i] += vet[i-1];
    }

    int q;

    cin>>q;

    for(int i = 0; i < q; ++i) {
        int a, b;
        cin>>a>>b;
        cout<<vet[b] - vet[a-1]<<"\n";
    }
}

