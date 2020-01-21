#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    int vet[2*n + 10];

    long long int proxPar = 2;
    long long int proxImpar = 1;

    for(int i = 0; i < n; i++) {
        if(i%2 == 0){
            vet[i] = proxImpar;
            vet[i+n] = proxPar;
            proxPar+=2;
            proxImpar+=2;
        }
        else {
            vet[i] = proxPar;
            vet[i+n] = proxImpar;
            proxPar+=2;
            proxImpar+=2;
        }
    }

    if(n%2 == 1) {
        cout<<"YES"<<endl;
        for(int i = 0; i < 2*n; ++i) {
            printf("%d ", vet[i]);
        }
        printf("\n");
    }
    else {
        printf("NO\n");
    }


}


