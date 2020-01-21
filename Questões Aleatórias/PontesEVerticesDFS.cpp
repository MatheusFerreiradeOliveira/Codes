#include <bits/stdc++.h>
using namespace std;
const int MAX = 410;
int raiz;
bool seen[MAX];
int low[MAX], d[MAX];
int tempo = 0;
set <int> Vcorte;
vector <int> adj[MAX];

void dfs(int u, int pai) {

    seen[u] = true;
    int nf = 0;
    d[u] = low[u] = tempo++;
    bool any = false;
    for(int v : adj[u]) {
        if(!seen[v]) {
            nf++;
            dfs(v, u);
            if(low[v] >= d[u]) any = true;
            low[u] = min(low[v], low[u]);

            /*if(low[v] > d[u]) {
              //U - V é ponte
                ponte.push_back({u, v});
            }*/
        }
        else if(v != pai) {
            low[u] = min(low[u], d[v]);
        }
    }
    if(u == raiz && nf >= 2)
        Vcorte.insert(u);
    else if(u != raiz && any)
        Vcorte.insert(u);
}

int main() {

    int n, m;
    int test = 1;
    while(cin>>n>>m && n != 0) {
        for(int i = 0; i < m; ++i) {
            int a, b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        memset(seen, false, sizeof(seen));
        raiz = 1;
        tempo = 0;
        dfs(1, -1);

        if(test > 1) printf("\n");

        printf("Teste %d\n", test);

        if(Vcorte.empty()) printf("nenhum");

        else {
            for(int x : Vcorte) {
                printf("%d ", x);
            }
        }
        printf("\n");
        test++;

        for(int i = 0; i <= n; ++i) adj[i].clear();
        Vcorte.clear();
    }

}
