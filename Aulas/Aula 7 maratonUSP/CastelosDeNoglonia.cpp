#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

const int INF = 1e9+10;
int n;
vector<int> adj[MAX];
int cor[MAX];
int seen[MAX];
bool achou = false;
bool continua = true;

struct Perg{
    int p, q, c;
};

void dfs(int p, int q, int c) {

    if(continua == false) return;

    seen[p] = 1;
    int wtf = cor[p];

    cor[p] = c;
    if(p == q) {
        achou = true;
        continua = false;
        return;
    }
    for(int x : adj[p]) {

        if(seen[x] != 0) continue;
        dfs(x, q, c);
    }

    if(!achou) {
        cor[p] = wtf;
        //cout<<"Mudou o "<<p<<" de volta para "<<wtf<<endl;
    }
}


int main() {

    memset(cor, 0, sizeof cor);

    int m;

    cin>>n>>m;

    for(int i = 1; i < n; i++) {
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    Perg lul[m];

    for(int i = 0; i < m; i++) {
        cin>>lul[i].p>>lul[i].q>>lul[i].c;
    }

    for(int i = 0; i < m; i++) {
        memset(seen, 0, sizeof seen);
        achou = false;
        continua = true;
        dfs(lul[i].p, lul[i].q, lul[i].c);
    }

    for(int i = 1; i <= n; i++) {
        cout<<cor[i]<<" ";
    }
    cout<<endl;
}



