#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

int n, m;
int cats[MAX];
vector <int> adj[MAX];
int visitados[MAX];
int grau[MAX];
int pai[MAX];
int g = 0, saida = 0;

void dfs(int v) {

    //cout<<"V da vez = "<<v<<endl;
    //cout<<"O G ta em = "<<g<<endl;

    visitados[v] = 1;
    bool deucerto = true;

    if(cats[v] >= 1){
        cats[v] += cats[pai[v]];
        //cout<<"Entrou no 1 IF"<<endl;
        if(cats[v] > m) {
            //cout<<"quebrou"<<endl;
            //g--;
            deucerto = false;
        }
    }

    if(v!=1 && deucerto && grau[v] == 1){
        saida++;
        //cout<<"Saida = "<<saida<<endl;
    }

    else if(deucerto){
        //cout<<"Entrou no 3 IF"<<endl;
        for(int x : adj[v]) {
            if(visitados[x] == 1) continue;

            pai[x] = v;

            visitados[x] = 1;

            dfs(x);
        }
    }

}

int main() {

    memset(visitados, 0, sizeof(visitados));
    memset(cats, 0, sizeof(cats));
    memset(grau, 0, sizeof(grau));
    memset(pai, 0, sizeof(pai));

    cin>>n>>m;

    for(int i = 1; i <= n; i++) {
        cin>>cats[i];
    }

    int a, b;

    for(int i = 0; i < n-1; i++) {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        grau[a]++;
        grau[b]++;
    }

    dfs(1);

    /*for(int i = 0; i <= n; i++){
        cout<<pai[i]<<endl;
    }*/

    cout<<saida<<endl;

}
