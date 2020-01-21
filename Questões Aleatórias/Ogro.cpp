#include <bits/stdc++.h>
#define MAX 100010
using namespace std;
int n, m;
int limites[MAX], premiacoes[MAX], forca[MAX];

int buscaB(int runner){
    int ini = 0;
    int fim = n-2;
    while(ini<=fim){
        int meio = (ini+fim)/2;
        if(ini == fim){
            if(runner >= limites[ini]) return meio+1;
            if(runner < limites[ini]) return 0;
        }

        if(limites[meio] == runner){
            return meio + 1;
        }
        else if(limites[meio] < runner){
            if(meio == n-2) return meio+1;
            if(limites[meio+1] > runner) return meio+1;
            ini = meio+1;
        }
        else if(limites[meio] > runner){
            if(meio == 0) return 0;
            if(limites[meio-1] <= runner) return meio;
            fim = meio-1;
        }
    }
    return 0;
}

int main(){

    cin>>n>>m;

    for(int i = 0; i < n-1; i++){
        cin>>limites[i];
    }
    for(int i = 0; i < n; i++){
        cin>>premiacoes[i];
    }
    for(int i = 0; i < m; i++){
        cin>>forca[i];
    }
    for(int i = 0; i < m; i++){
        if( i < m-1 ) cout<<premiacoes[buscaB(forca[i])]<<" ";
        else cout<<premiacoes[buscaB(forca[i])]<<endl;
    }
    return 0;
}
