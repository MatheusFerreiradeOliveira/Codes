#include <bits/stdc++.h>
#define MAX 1000010
using namespace std;

int n;

struct peca{

    int ini, fim;
    char letra;

};

peca p[MAX];

bool compara(peca a, peca b) {

    return a.ini < b.ini;

}

vector<char> saida;

int busca(int i) {

    int ini = 0;
    int fim = n-1;

    int gg = -1;

    while(ini <= fim) {
        int meio = (ini+fim)/2;

        if(p[meio].ini == i){
            //cout<<"Adicionou o "<<p[meio].letra<<" e retornou o "<<meio<<endl;
            saida.push_back(p[meio].letra);
            gg =p[meio].fim;
            break;
        }
        else if(p[meio].fim > i){
            fim = meio - 1;
        }
        else {
            ini = meio + 1;
        }

    }

    return gg;

}

int main() {

    cin>>n;

    for(int i = 0; i < n; i++) {
        cin>>p[i].ini>>p[i].letra>>p[i].fim;
    }

    sort(p, p+n, compara);

    int davez = p[0].fim;

    saida.push_back(p[0].letra);

    for(int i = 0; i < n; i++) {
        int aux = busca(davez);

        davez = aux;

        //cout<<"davez = "<<davez<<endl;

        if(aux == 1 || aux == -1) break;
    }

    for(auto x : saida){
        cout<<x;
    }
    cout<<endl;



}

