#include <bits/stdc++.h>
#define MAX 1010
using namespace std;

vector<int> adj[MAX];
int visitados[MAX];
int cont = 1;

void busca(int v) {
    visitados[v] = 1;

    for(int x : adj[v]) {
        if(visitados[x] == 1) continue;

        cont++;

        busca(x);
    }
}

int main(){

    int x;

    cin>>x;

    while(x--){
        memset(visitados, 0, sizeof(visitados));

        int n, m, runner;

        cin>>runner;

        cin>>n>>m;

        int a, b;

        for(int i = 0; i < m; i++) {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        busca(runner);

        /*cout<<"VISITADOS"<<endl;
        for(int i = 0; i < n; i++) {
            if(visitados[i] == 1)
                cout<<i<<" ";
        }
        cout<<endl;*/

        cout<<(cont-1)*2<<endl;

        cont = 1;

        for(int i = 0; i < n; i++) adj[i].clear();

    }
}
