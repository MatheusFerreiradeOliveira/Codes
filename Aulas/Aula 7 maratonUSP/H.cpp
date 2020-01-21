#include <bits/stdc++.h>
#define MAX 510
const long long int INF  = 1e12 + 10;
using namespace std;

int n, m;
int grafo[MAX][MAX];
set<long long int> distMarc[MAX][MAX];
vector<pair<int, int>> adj[MAX];
long long int dist[MAX];
bool seen[MAX];
long long int totalLength = 0;
long long int length = 0;
int pai[MAX];
bool deucerto = true;

void dijkstra(int ii, int jj) {

    for(int q = 0; q <= n; q++) {
        dist[q] = INF;
    }

    memset(seen, false, sizeof(seen));
    memset(pai, -1, sizeof(pai));

    set<pair<long long int, int>> lul;

    lul.insert({0, ii});

    dist[ii] = 0;

    while(!lul.empty()) {

        auto aux = *lul.begin();

        lul.erase(lul.begin());

        int vertice = aux.second;
        long long int distV = aux.first;

        if(seen[vertice]) continue;

        seen[vertice] = true;

        for(auto x : adj[vertice]) {

            long long int v = x.first;
            long long int w = x.second;

            if(grafo[vertice][v] == 0 && distMarc[vertice][v].count(x.second) != 0) continue;

            if(dist[v] > dist[vertice] + w){
                dist[v] = dist[vertice] + w;;
                pai[v] = vertice;
                lul.insert({dist[v], v});
            }
        }
    }
}

int main() {

    while(cin>>n>>m && n!=0) {

        deucerto = true;

        memset(grafo, -1, sizeof(grafo));

        int c, f;

        cin>>c>>f;

        int a, b, d;

        for(int i = 0; i < m; i++) {
            cin>>a>>b>>d;
            adj[a].push_back({b, d});
            //adj[b].push_back({a, d});
        }

        dijkstra(c, f);

        //cout<<dist[f]<<endl;

        if(dist[f] == INF)
            cout<<-1<<endl;

        else {
            int aux = f;
            totalLength = dist[f];

            while(pai[aux] != -1) {
                grafo[pai[aux]][aux] = 0;
                distMarc[pai[aux]][aux].insert(dist[aux] - dist[pai[aux]]);
                //cout<<"Marquei o caminho "<<pai[aux]<<" "<<aux<<" com tamanho "<<dist[aux] - dist[pai[aux]]<<endl;
                aux = pai[aux];
            }

            dijkstra(c, f);

            length = dist[f];

            //cout<<"Length = "<<length<<endl;


            while(totalLength == length) {

                dijkstra(c, f);

                if(dist[f] == INF){
                    deucerto = false;
                    break;
                }

                aux = f;

                while(pai[aux] != -1) {
                    grafo[pai[aux]][aux] = 0;
                    distMarc[pai[aux]][aux].insert(dist[aux] - dist[pai[aux]]);
                    //cout<<"Marquei o caminho "<<pai[aux]<<" "<<aux<<" com tamanho "<<dist[aux] - dist[pai[aux]]<<endl;
                    aux = pai[aux];
                }

                length = dist[f];
            }


            /*for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++)
                    cout<<grafo[i][j]<<" com tamanho "<<*distMarc[i][j].begin();
                cout<<endl;
            }*/

            if(dist[f] == INF)
                deucerto = false;

            if(!deucerto)
                cout<<-1<<endl;

            else {
                cout<<dist[f]<<endl;
            }

        }
        for(int i = 0; i <= n; i++) adj[i].clear();
    }
}
