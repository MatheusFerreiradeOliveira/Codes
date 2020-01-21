//Arquivo mudado;
#include <bits/stdc++.h>
#define MAX 1010
using namespace std;

const int INF = 1e9 + 10;
int n, m;
vector<pair<int, int>> adj[MAX];
//int vet[MAX][MAX];
int dist[MAX];
bool seen[MAX];

void dijkstra(int v) {

    memset(seen, 0, sizeof seen);

    for(int i = 1; i <= n; i++) dist[i] = INF;

    dist[v] = 0;

    priority_queue<pair<int, int>> lul;

    lul.push({0, v});

    while(!lul.empty()) {
        pair<int, int> aux = lul.top();

        lul.pop();

        int vertice = aux.second;

        if(seen[vertice] != 0) continue;

        seen[vertice] = 1;

        for(auto x : adj[vertice]) {
            int ver = x.first;
            int w = x.second;
            if(dist[ver] > dist[vertice] + w) {
                dist[ver] = dist[vertice] + w;
                lul.push({-dist[ver], ver});
            }
        }

    }


}

int main() {

    cin>>n>>m;

    for(int i = 0; i < m; i++) {
        int a, b, c;
        cin>>a>>b>>c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    dijkstra(1);

    cout<<dist[n]<<endl;

}
