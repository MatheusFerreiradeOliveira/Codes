#include <bits/stdc++.h>
#define MAX 300
using namespace std;

int n, m, c, k;
vector<pair<int, int>> adj[MAX];
int mat[MAX][MAX];
bool achou = false;
int seen[MAX];
int dist[MAX];
int primeiro = 1e9+10;
const int INF = 1e9+10;
int pai[MAX];

void dijkstra(int v) {

    for(int i = 0; i < n; i++)
        dist[i] = INF;
    memset(seen, 0, sizeof seen);
    memset(pai, -1, sizeof pai);

    dist[v] = 0;

    priority_queue<pair<int, int>> lul;

    lul.push({0, v});

    while(!lul.empty()) {

        pair<int, int> aux = lul.top();
        lul.pop();

        int vertice = aux.second;

        if(seen[vertice] != 0) continue;

        seen[vertice] = 1;

        for(pair<int, int> x : adj[vertice]) {

            int ver = x.first;
            int w = x.second;

            if(dist[ver] > dist[vertice] + w){
                dist[ver] = dist[vertice] + w;
                lul.push({-dist[ver], ver});
                pai[ver] = vertice;
                cout<<"pai de "<<ver<<" e "<<vertice<<endl;
            }
        }
    }
}

int main() {

    cin>>n>>m>>c>>k;

    int a, b, d;

    for(int i = 0; i < m; i++) {
        cin>>a>>b>>d;

        adj[a].push_back({b, d});
        adj[b].push_back({a, d});

        mat[a][b] = c;
        mat[b][a] = c;
    }

    int saida = 0;

    dijkstra(k);

    cout<<"Pai de c-1 = "<<pai[c-1]<<endl;

    if(pai[c-1] == c - 2)
        cout<<dist[c-1]<<endl;

    else {
        int aux = c-1;
        int distT = dist[c-1];

        bool achou = false;

        while(aux != -1) {

            distT -= mat[aux][pai[aux]];

            aux = pai[aux];

            if(aux < c) {
                achou = true;

                for(int i = aux; i < c - 1; i++) {
                    distT += mat[i][i+1];
                }
            }
            if(achou) break;
        }

        if(achou)
            cout<<distT<<endl;
        else
            cout<<dist[c-1]<<endl;
    }
}
