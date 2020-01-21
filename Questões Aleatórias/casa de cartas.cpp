#include <bits/stdc++.h>
using namespace std;
struct pais{
    int indice, ouro = 0, prata = 0, bronze = 0;
};

bool compara (pais a, pais b){
    if(a.ouro != b.ouro)
        return a.ouro > b.ouro;
    if(a.prata != b.prata)
        return a.prata > b.prata;
    if(a.bronze != b.bronze)
        return a.bronze > b.bronze;
    return a.indice < b.indice;
}
int main(){
    int n, m;
    cin>>n>>m;
    pais lul[n];

    for(int i = 1; i <= m; i++){
        int a,b,c;
        cin>>a>>b>>c;
        lul[a-1].ouro++;
        lul[b-1].prata++;
        lul[c-1].bronze++;
    }

    for(int i =0; i < n; i++){
        lul[i].indice = i+1;
    }

    sort(lul, lul+n, compara);

    int cont = 0;

    for(int i = 0; i < n;i++){
        cout<<lul[i].indice;
        if(i<n-1)
            cout<<" ";
    }
    cout<<endl;
    return 0;
}
