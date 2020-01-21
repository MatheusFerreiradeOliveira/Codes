#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

const int INF = 1e9+10;
int n;
vector<pair<int, int>> adj[MAX];
int dist[MAX];
int seen[MAX];

void dijkstra(int v) {

    for(int i = 1; i <= n; i++)
        dist[i] = INF;

    memset(seen, 0, sizeof seen);

    priority_queue<pair<int, int>> lul;

    lul.push({0, v});

    dist[v] = 0;

    while(!lul.empty()) {

        pair<int, int> aux = lul.top();

        lul.pop();

        int vertice = aux.second;

        if(seen[vertice] != 0) continue;

        seen[vertice] = 1;

        for(auto x : adj[vertice]) {
            int ver = x.first;
            int w = x.second;

            if(dist[ver] > dist[vertice] + w){
                dist[ver] = dist[vertice] + w;
                lul.push({-dist[ver], ver});
            }
        }
    }
}


int main() {

    int ini, fim;

    cin>>n>>ini>>fim;

    for(int i = 1; i < n; i++) {
        int a, b, c;
        cin>>a>>b>>c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    dijkstra(ini);

    cout<<dist[fim]<<endl;

}

