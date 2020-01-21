#include <bits/stdc++.h>
#define MAX 110
using namespace std;

const int INF = 1e9 + 10;
int n, m;
vector<pair<int, int>>adj[MAX];
int seen[MAX];
int dist[MAX];
int maiorDist;
int idMaior;
int grau[MAX];

void dijkstra(int v) {

    maiorDist = 0;
    for(int i = 0; i < n; i++){
        dist[i] = INF;
    }
    memset(seen, 0, sizeof seen);
    dist[v] = 0;

    priority_queue<pair<int, int>> lul;

    lul.push({0, v});

    while(!lul.empty()) {
        pair<int, int> aux = lul.top();
        lul.pop();

        int vertice = aux.second;

        if(seen[vertice] != 0) continue;

        if(maiorDist <= dist[vertice]) {
            maiorDist = dist[vertice];
            idMaior = vertice;
        }

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

    memset(grau, 0 , sizeof grau);

    cin>>n>>m;

    for(int i = 0; i < m; i++) {
        int a, b, c;
        cin>>a>>b>>c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
        grau[a]++;
        grau[b]++;
    }

    dijkstra(0);

    cout<<"id maior = "<<idMaior<<endl;
    cout<<"maior dist = "<<maiorDist<<endl;


    dijkstra(idMaior);

    cout<<maiorDist<<endl;

}
