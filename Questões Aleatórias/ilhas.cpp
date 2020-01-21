#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;
const int MAX = 1010;
int n, m;
vector<pair<int, int>> adj[MAX];
int dist[MAX];
int seen[MAX];
int maior = 0, menor = INF;

void dijkstra(int v) {

    for(int i = 0; i <= n; i++) dist[i] = INF;
    dist[v] = 0;
    memset(seen, 0, sizeof seen);

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

    int serv;

    cin>>serv;

    dijkstra(serv);

    sort(dist+1, dist+n+1);

    cout<<dist[n] - dist[2]<<endl;
}
