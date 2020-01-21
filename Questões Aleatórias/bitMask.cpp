
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    int v[n];

    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }

    int x;

    cin>>x;

    int tam = 1 << n;

    bool deucerto = false;

    for(int mask = 0; mask < tam; mask++) {
        int s = 0;
        for(int i = 0; i < n; i++){
            if((1 << i) & mask) {
                s += v[i];
            }
        }

        //cout<<s<<endl;

        if(s == x){
            deucerto = true;
            //break;
        }
    }

    if(deucerto)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}


PD MOCHILA

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
Q
}

PD CUT RIBBON

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 10;
int memo[4005][3];
int vet[3];

int pd(int n, int i) {

    if(n < 0) return -INF;

    if(n == 0) return 0;

    if(i >= 3) return -INF;

    int &pdm = memo[n][i];
    if(pdm != -1) return pdm;

    return pdm = max(pd(n, i+1), 1 + pd(n-vet[i], i));

}

int main() {

    memset(memo, -1, sizeof(memo));

    int n;

    cin>>n>>vet[0]>>vet[1]>>vet[2];

    cout<<pd(n, 0)<<endl;

}

PD PEGANDO MESMO VALOR

#include <bits/stdc++.h>
#define MAX 110
using namespace std;
const int INF = 1e9 + 10;

int val, pe;
int memo[MAX][MAX];
int valores[MAX];
int pesos[MAX];
bool deucerto = false;

int pd(int i, int sz) {

    if (sz > val) return INF;

    if(sz == val) {
        deucerto = true;
        return 0;
    }

    if(i > val) return INF;

    if(valores[i] == -1) return pd (i+1, sz);

    //cout<<"sz = "<<sz<<" i = "<<i<<endl;

    int &pdm = memo[i][sz];
    if(pdm != -1) return pdm;

    //cout<<"Passou"<<endl;

    return pdm = min(pd(i+1, sz), valores[i] + pd(i, sz + i));

}


int main() {

    int k;

    cin>>k;

    while(k--) {

        memset(memo, -1, sizeof(memo));
        memset(valores, -1, sizeof(valores));

        cin>>pe>>val;

        for(int i = 1; i <= val; i++) {

            cin>>valores[i];

        }

        int aux = pd(1, 0);

        if(deucerto) cout<<aux<<endl;

        else cout<<-1<<endl;

        deucerto = false;

    }




}


