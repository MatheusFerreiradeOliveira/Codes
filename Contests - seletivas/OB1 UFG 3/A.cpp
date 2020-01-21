#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    int vet[n];

    for(int i = 0; i < n; i++) {
        cin>>vet[i];
    }

    sort(vet, vet+n);

    for(int i = 0; i < n; i++) {
        cout<<vet[i]<<" ";
    }
    cout<<endl;

}
