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
