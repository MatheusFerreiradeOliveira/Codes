#include <bits/stdc++.h>
using namespace std;

struct pais{
    string nome;
    int ouro = 0, prata = 0, bronze = 0;
};

map<string, pais> mapa;

 bool compara(pais a, pais b){
        if(a.ouro != b.ouro)
            return a.ouro>b.ouro;
        if(a.prata != b.prata)
            return a.prata>b.prata;
        if(a.bronze!=b.bronze)
            return a.bronze>b.bronze;
        return a.nome<b.nome;
 }
int main(){

    string modalidade;
    int i =0, tam = 0;;
    while(getline(cin, modalidade)){
            string a, b ,c;
            cin>>a>>b>>c;
            mapa[a].ouro++;
            mapa[a].nome = a;
            mapa[b].prata++;
            mapa[b].nome = b;
            mapa[c].bronze++;
            mapa[c].nome = c;
            tam++;
    }
    //pais aux[tam] =
    sort(mapa.begin(), mapa.end(), compara);
    cout<<"Quadro de medalhas"<<endl;
    for(int i = mapa.begin(); i < mapa.end(); i++){
        cout<<mapa[mapa.begin()].nome<<" "<<mapa[mapa.begin()].ouro<<" "<<mapa[mapa.begin()].prata<<" "<<mapa[mapa.begin()].bronze<<endl;
    }
    return 0;
}
