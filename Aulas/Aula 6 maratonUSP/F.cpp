#include <bits/stdc++.h>
#define MAX 10010
using namespace std;

int visitados[MAX];
vector <int> adj[MAX];
int grau[MAX];
int pai[MAX];
int grauAux[MAX];

int cont = 0;
pair <int, int> maiorP;

void dfs(int v) {
    visitados[v] = 1;

    for(int x : adj[v]) {
        if(visitados[x] == 1) continue;

        pai[x] = v;

        cont++;
        dfs(x);
    }

    if(grau[v] == 1){
        if(cont > maiorP.second) {
            maiorP.second = cont;
            maiorP.first = v;
        }
        cont--;
        grau[pai[v]]--;
    }
}

int main(){

    memset(visitados, 0, sizeof(visitados));
    memset(grau, 0, sizeof(grau));
    memset(grauAux, 0, sizeof(grauAux));

    int n;

    cin>>n;

    int a, b;

    for(int i = 0; i < n-1; i++) {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        grau[a]++;
        grau[b]++;
        grauAux[a]++;
        grauAux[b]++;
    }

    dfs(1);

    memset(visitados, 0, sizeof(visitados));

    for(int i = 0; i <= n; i++){
        grau[i] = grauAux[i];
    }

    cont = 0;

    dfs(maiorP.first);

    //cout<<maiorP.first<<endl;
    cout<<maiorP.second<<endl;


    //cout<<maiorG<<endl;

}
