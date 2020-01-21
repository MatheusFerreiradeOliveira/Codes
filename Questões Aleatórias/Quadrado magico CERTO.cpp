#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    int m1[n][n];
    int somalinhas[n], somacolunas[n], diagonais[2];

    memset(somacolunas, 0, 4*n);
    memset(somalinhas, 0, 4*n);
    memset(diagonais, 0, 4*2);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>m1[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            somalinhas[i]+=m1[i][j];
            somacolunas[i]+=m1[j][i];
        }
    }
    for(int j = 0; j < n; j++){
        diagonais[0] += m1[j][j];
    }
    for(int j = 0; j < n; j++){
        diagonais[1] += m1[j][n-1-j];
    }

    int diagonal, linha, coluna;
    bool deucerto = true;
    if(diagonais[0] == diagonais[1])
        diagonal = diagonais[0];
    else{
        deucerto = false;
        cout<<-1<<endl;
    }
    linha = somalinhas[0];
    coluna = somacolunas[0];
    for(int i = 0; i < n && deucerto == true; i++)
    {
        if(somalinhas[i] != linha || somalinhas[i] != coluna || somalinhas[i] != diagonal || somacolunas[i] != linha || somacolunas[i] != coluna || somacolunas[i] != diagonal)
        {
            cout<<-1<<endl;
            deucerto = false;
            break;
        }
    }
    if(deucerto)
        cout<<linha<<endl;

}
