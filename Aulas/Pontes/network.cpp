#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;
int tempo = 1;
int raiz;
vector<int> adj[MAXN];
int low[MAXN], d[MAXN];
bool seen[MAXN];
vector<pair<int, int>>pontes;
vector<int> Vcorte;
map<pair<int, int>, bool> Eponte;

void dfs(int u, int pai) {
    bool any = false;
    int nf = 0;
    low[u] = d[u] = tempo++;
    seen[u] = true;
    for(int v : adj[u]) {
        if(!seen[v]) {
            nf++;
            dfs(v, u);
            if(low[v] <= low[u]) any = true;
            low[u] = min(low[v], low[u]);
            if(d[u] < low[v]) {
                Eponte[{u, v}] = Eponte[{v, u}] = true;
                pontes.push_back({u, v});
                pontes.push_back({v, u});
            }
        }
        else if(v != pai) {
            low[u] = min(low[v], d[u]);
        }
    }
    if(u == raiz && nf >= 2) Vcorte.push_back(u);
    else if(u != raiz && any) Vcorte.push_back(u);
}

int main() {
    int n, m;
    while(cin>>n>>m && n!=0) {
        for(int i = 0; i < m; ++i) {
            int a, b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        tempo = 1;
        memset(seen, false, sizeof seen);
        raiz = 1;
        dfs(1, -1);

        int q;

        scanf("%d", &q);

        for(int i = 0; i < q; ++i) {
            int a, b, c, d, e;

            scanf("%d", &a);

            if(a == 1) {
                scanf("%d %d %d %d", &b,&c, &d, &e);



            }

        }

    }
}
