#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;
const int INF = 1e9+10;
int n, m;
int tempo = 0;
int sn = 0;
int low[MAXN], d[MAXN], st[MAXN]; //low eh ate onde sobe aquele componente;
int comp[MAXN];
bool seen[MAXN];
vector<int> adj[MAXN];

int dfs(int u) {

    seen[u] = true;
    st[sn++] = u;
    d[u] = low[u] = tempo++;
    for(int v : adj[u]) {
        if(!seen[v]) {
            dfs(v);
            low[u] = min(low[v], low[u]);
        }
        else {
            low[u] = min(low[u], d[v]);
        }
    }
    if(low[u] >= d[u]) {
        int a;
        do {
            a = st[--sn];
            comp[a] = u;
            low[a] = INF;
        } while(a != u);
    }
}

int main() {

    while(cin>>n>>m && n!=0) {

        tempo = 0;
        sn = 0;
        memset(seen, false, sizeof seen);
        memset(comp, 0, sizeof comp);

        for(int i = 0; i < m; ++i) {
            int v, w, p;
            cin>>v>>w>>p;

            if(p == 1) {
                adj[v].push_back(w);
            }
            else {
                adj[v].push_back(w);
                adj[w].push_back(v);
            }
        }

        bool deucerto = true;

        for(int i = 1; i <= n; ++i) {
            if(seen[i]) continue;
            dfs(i);
        }

        for(int i = 1; i < n; ++i) {
            //cout<<comp[i]<<endl;
            if(comp[i] != comp[i+1]) deucerto = false;
        }

        if(deucerto) cout<<1<<"\n";
        else cout<<0<<"\n";

        for(int i = 0; i<=n; ++i) adj[i].clear();
    }

}
