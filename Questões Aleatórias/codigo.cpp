#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    int vet[n];

    for(int i = 0; i < n; i++) {
        cin>>vet[i];
    }

    int saida = 0;

    for(int i = 0; i < n - 2; i++) {
        if(vet[i] == 1 && vet[i + 1] == 0 && vet[i + 2] == 0) saida++;
    }


    cout<<saida<<endl;
}
