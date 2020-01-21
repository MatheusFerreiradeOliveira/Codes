#include <bits/stdc++.h>
using namespace std;
struct Corredor{
    int id;
    int posi;
    int pontuacao;
    Corredor (){
        posi = 0;
        pontuacao = 0;
        id = 0;
    }
};
bool compara(Corredor a, Corredor b){
    if(a.pontuacao != b.pontuacao)
        return a.pontuacao > b.pontuacao;
    return a.id < b.id;
};
int main(){
    int p, g;
    while(cin>>g>>p){
        if(p ==0 and g == 0)
            break;
        int Nseipq[g][p];
        for(int q = 0; q < g; q++){
            for(int w = 0; w < p;w++){
                cin>>Nseipq[q][w];
            }
        }
        int pontuacao[1000010];
        memset(pontuacao, 0, sizeof(pontuacao));
        int s;
        cin>>s;
        for(int j = 0; j < s;j++){
                Corredor corredor[p];
                int k;
                cin>>k;
                for(int l = 0; l < k;l++){
                    cin>>pontuacao[l];
                }
                for(int q = 0; q < g; q++){
                    for(int w = 0; w < p;w++){
                        corredor[w].id = w+1;
                        corredor[w].pontuacao += pontuacao[Nseipq[q][w] - 1];
                    }
                }
                memset(pontuacao, 0, sizeof(pontuacao));
                sort(corredor, corredor+p, compara);
                cout<<corredor[0].id;
                for(int r = 1; r < p && corredor[r].pontuacao == corredor[0].pontuacao; r++){
                        cout<<" "<<corredor[r].id;
                }
                cout<<endl;
        }
    }
    return 0;

}
