#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int vet[n];
    for(int i = 0; i < n; i++){
        cin>>vet[i];
    }
    //sort(vet, vet+n);
    int a = 0, b = 0;

    int cont = 0;
    for(int i = n-1, j = 0; i >= j;){
        if(cont == 0){
            a+=max(vet[i], vet[j]);

            if(vet[i] > vet[j]) i --;

            else j++;

            cont ++;
        }
        else{
            b += max(vet[i], vet[j]);
            if(vet[i] > vet[j]) i --;
            else j++;
            cont = 0;
        }
    }

    cout<<a<<" "<<b<<endl;

}




