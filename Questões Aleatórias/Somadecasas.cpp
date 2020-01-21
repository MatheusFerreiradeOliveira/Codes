#include <bits/stdc++.h>
#define MAX 100010
using namespace std;
int n, m;
int casas[100100];
int buscaB(int runner){
    int ini = 0;
    int fim = n-1;
    while(ini <=fim){
        int meio = (ini+fim)/2;

        if(casas[meio]+runner == m){
            return meio;
        }
        if(casas[meio]+runner > m){
            fim = meio-1;
        }
        if(casas[meio]+runner < m){
            ini = meio+1;
        }
    }
    return -1;
}

int main(){

    cin>>n;


    for(int i = 0; i < n; i++){
        cin>>casas[i];
    }

    cin>>m;

    int lul;

    for(int i = 0; i < m; i++){
        lul = buscaB(casas[i]);
        if(lul != -1){
            cout<<casas[i]<<" "<<casas[lul]<<endl;
            break;
        }
    }

    return 0;
}

