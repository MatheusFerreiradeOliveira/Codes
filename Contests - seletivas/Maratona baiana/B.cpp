#include <bits/stdc++.h>
#define MAX1 1010
#define MAX2 10010
using namespace std;

struct Competidor {
    int custo = 0, pont = 0;
    string cidade;
};

int n;
Competidor comp[MAX1];
const int INF = 1e9+10;
int memo[MAX1][MAX2];

int dp(int i, int v, map<string, int> mp) {

    if(v < 0) return -INF;

    map<string,int> aux2 = mp;

    aux2[comp[i].cidade]++;

    if(aux2[comp[i].cidade] > 1) return dp(i+1, v, mp);

    if(i >= n) return 0;

    if(memo[i][v] != -1) return memo[i][v];

    return memo[i][v] = max(dp(i+1, v, mp), comp[i].pont + dp(i+1, v - comp[i].custo, aux2));

}

int main () {

    map <string, int> mp;

    for(int i = 0; i < MAX1;i++) {
        for(int j = 0; j < MAX2;j++){
            memo[i][j] = -1;
        }
    }

    int m;

    cin>>n>>m;

    for(int i = 0; i < n; i++) {
        cin>>comp[i].custo>>comp[i].pont>>comp[i].cidade;
    }

    int saidaT;

    saidaT = dp(0, m, mp);

    if(saidaT < 0)
        cout<<0<<endl;
    else
        cout<<saidaT<<endl;

}






