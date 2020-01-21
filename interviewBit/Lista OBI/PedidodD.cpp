#include <bits/stdc++.h>
using namespace std;

int main() {

    int C, m, cont = 1;

    while(cin>>C>>m && C != 0 && m != 0) {

        int saidaT = 0;
        int saida = 0;
        int tempo = 0;

        pair<int, int> livro[m];

        for(int i = 0; i < m; i++) {
            cin>>livro[i].first>>livro[i].second;
        }

        for(int i = 0; i < m; i++) {

            saida = livro[i].second;
            tempo = livro[i].first;

            if(tempo > C) continue;

            for(int j = 0; j < m; j++) {

                if(i == j) continue;

                if(tempo + livro[j].first <= C) {
                    saida += livro[j].second;
                    tempo += livro[j].first;
                }
                else continue;
            }

            saidaT = max(saida, saidaT);
            saida = 0;
            tempo = 0;
        }

        cout<<"Teste "<<cont<<endl;

        cout<<saidaT<<endl;

        cout<<endl;

        cont++;

    }

}
