#include <bits/stdc++.h>
#define MAX 100010
using namespace std;
const int INF = 1e9 + 10;


vector<pair<long long int, int>> adj[MAX];
long long int dist[MAX];
bool seen[MAX];
int n, m;

void dijkstra(int ii) {
    for(int i = 0; i <= n+1; i++){
        dist[i] = INF;
    }
    memset(seen, false, sizeof(seen));
    priority_queue<pair<int, int>> q;

    dist[ii] = 0;

    q.push({0, ii});

    while(!q.empty()) {

        pair<int, int> aux = q.top();

        q.pop();

        int vertice = aux.second;
        int distV = aux.first;

        if(seen[vertice]) continue;

        seen[vertice] = true;

        for(auto x : adj[vertice]) {

            int v = x.first;
            int w = x.second;

            if(dist[v] > dist[vertice] + w) {
                dist[v] = dist[vertice] + w;

                q.push({-dist[v], v});
            }
        }
    }


}


int main() {

    cin>>n>>m;

    int a, b, c;

    for(int i = 0; i < m; i++) {
        cin>>a>>b>>c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    dijkstra(0);

    cout<<dist[n+1]<<endl;


}
