#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    int vet[n];
    int runner = 0;
    int saida = 0;
    for(int i = 0; i < n; i++){
        cin>>vet[i];
    }
    for(int i = 0; i < n; i ++){
        if(vet[i] == 1)
            runner = 0;
        else
            runner++;
        if(runner == 2)
            saida++;
    }
    cout<<saida<<endl;
}
