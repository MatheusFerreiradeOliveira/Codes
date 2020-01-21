#include <bits/stdc++.h>
using namespace std;

struct Paises{
    int ouro, prata, bronze;
    int id;
};

bool compara(Paises a, Paises b){
    if(a.ouro == b.ouro){
        if(a.prata == b.prata){
            if(a.bronze == b.bronze)
                return a.id < b.id;
            else
                return a.bronze > b.bronze;
        }
        else
            return a.prata>b.prata;
    }
    else
        return a.ouro>b.ouro;
}



int main(){
    int n, m;
    cin>>n>>m;
    Paises paises[n];
    for(int i = 0; i < n; i++){
        paises[i].id = i+1;
        paises[i].ouro = 0;
        paises[i].prata = 0;
        paises[i].bronze = 0;
    }
    int o, p, b;
    for(int i = 0; i < m; i++){
        cin>>o>>p>>b;
        paises[o-1].ouro++;
        paises[p-1].prata++;
        paises[b-1].bronze++;
    }

    sort(paises, paises+n, compara);

    for(int i = 0; i < n; i++){
        if(i < n - 1)
            cout<<paises[i].id<<" ";
        else
            cout<<paises[i].id<<endl;
    }

    return 0;
}

