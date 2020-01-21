#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int vet[n];
    for(int i = 0; i < n; i++){
        cin>>vet[i];
    }
    sort(vet, vet+n);
    int m;
    cin>>m;
    for(int ini = 0, fim = n-1; ini < fim;){
        if(vet[ini]+vet[fim] == m){
            printf("%d %d\n", vet[ini], vet[fim]);
            break;
        }
        else if(vet[ini]+vet[fim] > m)
            fim--;
        else
            ini++;
    }
}

