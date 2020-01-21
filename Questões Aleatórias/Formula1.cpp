#include <bits/stdc++.h>
using namespace std;
int n, m, cont = 0;
struct carros{
    int identificador;
    int corridas[110];
    int pontuacao = 0;
    memset(corridas, 0, 4*n);
};

bool compara(carros a, carros b){
    if(a.pontuacao != b.pontuacao)
        return a.pontuacao > b.pontuacao;
    cont++;
    return a.identificador < b.identificador;
}

int main(){

    cin>>n>>m;
    carros lul[m];
    for(int i =0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>lul[j].corridas[i];
        }
    }
    for(int j = 0; j < m; j++)
    {
        lul[j].identificador = j+1;
    }
    //sort(lul, lul+m, compara);
    int putaria;
    cin>>putaria;
    for(int i =0; i < putaria; i++){
        int k;
        cin>>k;
        int pont[k];
        for(int j = 0; j < k;j++){
            cin>>pont[j];
        }
        for(int j = 0; j < n;j++){
                for(int u = 0;u < m;u++)
                {
                    if(j == lul[i].indicador)
                        lul[i].pontuacao += pont[j];
                }
        }
        sort(lul, lul+m, compara);

        for(int i = 0; i < cont;i++){
            cout<<lul[i].identificador;
            if(i < cont-1)
                cout<< " ";
        }
    }
    cout<<endl;

    }
    return 0;
}
