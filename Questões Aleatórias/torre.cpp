#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int matriz[n][n];
    int somaLinha[n], somaColuna[n], davez;
    memset(somaLinha, 0, sizeof(somaLinha));
    memset(somaColuna, 0, sizeof(somaColuna));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>matriz[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            somaLinha[i] += matriz[i][j];
            somaColuna[i] += matriz[j][i];
        }
    }
    int maior = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            davez = somaLinha[i] + somaColuna[j] - (2*matriz[i][j]);
            if(davez > maior)
                maior = davez;
        }
    }
    cout<<maior<<endl;
    return 0;
}

