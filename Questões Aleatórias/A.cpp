#include <bits/stdc++.h.>
using namespace std;
int main(){
    int n;
    cin>>n;
    int vet[n];
    int blocados=0;
    memset(vet, 0, sizeof(vet));
    int runner;
    for(int i = 0; i < n; i++){
        cin>>vet[i];
    }
    for(int i = n-1; i >= 0; i--){
        if(vet[i] == 0) continue;
        for(int j = 0; j < i; j++){
            if(vet[j] == vet[i]){
                vet[j] = 0;
                blocados++;
            }
        }
    }
    cout<<n - blocados<<endl;
    for(int i = 0; i < n; i++){
        if(vet[i] != 0){
            if(i < n-1)
                cout<<vet[i]<<" ";
            else
                cout<<vet[i]<<endl;
        }
    }

}
