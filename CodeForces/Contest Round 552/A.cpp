#include <bits/stdc++.h>
using namespace std;

int main() {


    int vet[4];

    cin>>vet[0]>>vet[1]>>vet[2]>>vet[3];

    sort(vet, vet+4);

    int maior = vet[3];

    cout<<maior-vet[1]<<" "<<maior-vet[2]<<" "<<maior-vet[0]<<endl;

}
