#include <bits/stdc++.h>
#define MAX 200010
using namespace std;

int n, m;
vector<int> adj[MAX];
int visitados[MAX];
int grau[MAX];
int pai[MAX];
int /*contA = 0,*/ contV = 0;
int comp;
bool deucerto = true;

void dfs(int v) {

    if(grau[v] != comp) deucerto = false;

    contV++;

    visitados[v] = 1;

    for(int x : adj[v]) {
        //if(x != pai[v]) contA++;

        if(visitados[x] == 1) continue;

        pai[x] = v;

        dfs(x);
    }

}


int main() {

    memset(visitados, 0, sizeof(visitados));
    memset(grau, 0, sizeof(grau));
    memset(pai, 0, sizeof(pai));

    cin>>n>>m;
    int a, b;

    for(int i = 0; i < m; i++) {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        grau[a]++;
        grau[b]++;
    }

    int saida = 0;

    for(int i = 1; i <= n; i++) {
        if(visitados[i] == 1) continue;

        comp = grau[i];
        //cout<<"Compara com: "<<comp<<endl;

        dfs(i);

        //cout<<"ContA: "<<contA<<" contV: "<<contV<<endl;

        if(deucerto && contV > 2 && comp == 2) saida++;


        deucerto = true;

        //contA = 0;
        contV = 0;
    }

    cout<<saida<<endl;

}
