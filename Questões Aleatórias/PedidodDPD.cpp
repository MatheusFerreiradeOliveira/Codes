#include <bits/stdc++.h>
#define MAX 60
#define MAX2 1010
using namespace std;

const int INF = 1e9+10;
int C, m;
pair<int, int> livro[MAX];
int memo[MAX][MAX2];

int PD(int i, int T){

    if(T > C) return -INF;

    //if(T + livro[i].first > C) return 0;

    if(i > m) {
        return 0;
    }

    if(memo[i][T] != -1) return memo[i][T];
    //if(T == C) return 0;

    return memo[i][T] = max(PD(i + 1, T), livro[i].second + PD(i + 1, T + livro[i].first));
}

int main() {

    int cont = 1;

    while(cin>>C>>m && C != 0 && m != 0) {

        memset(memo, -1, sizeof memo);

        int saidaT = 0;
        int saida = 0;
        int tempo = 0;

        for(int i = 1; i <= m; i++) {
            cin>>livro[i].first>>livro[i].second;
        }

        saidaT = PD(1, 0);

        cout<<"Teste "<<cont<<endl;

        cout<<saidaT<<endl;

        cout<<endl;

        cont++;

    }

}

