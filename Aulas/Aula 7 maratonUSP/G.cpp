#include <bits/stdc++.h>
#define MAX 100010
#define INF 1e9 + 10
using namespace std;

int n, m;
vector<pair<int, int>> adj[MAX];
//int maisProx = 9999999;
//int menorDist = 9999999;
long long int dist[MAX];
bool seen[MAX];
int pai[MAX];

void dijkstra(int i) {

    memset(seen, false, sizeof(seen));
    memset(dist, INF, sizeof(dist));

    set<pair<int, int>> lul;

    //seen[i] = true;
    dist[i] = 0;
    lul.insert(make_pair(0, i));

    while(!lul.empty()) {

        pair<int, int> aux = *lul.begin();

        lul.erase(lul.begin());

        int distV = aux.first;
        int vertice = aux.second;

        if(seen[vertice]) continue;

        seen[vertice] = true;

        for(auto x : adj[vertice]) {

            //int v =
            if(dist[x.first] > dist[vertice] + x.second){

                dist[x.first] = dist[vertice] + x.second;

                pai[x.first] = vertice;

                lul.insert(make_pair( dist[x.first] , x.first));
            }

        }
    }



}

int main() {

    memset(pai, -1, sizeof(pai));

    cin>>n>>m;

    int a, b, c;

    for(int i = 0; i < m; i++) {
        cin>>a>>b>>c;

        adj[a].push_back(make_pair(b, c));
        adj[b].push_back(make_pair(a, c));
    }

    dijkstra(1);

    if(seen[n] == false)
        cout<<-1<<endl;

    else {

        stack<int> runner;

        runner.push(n);

        int aux = n;

        while(pai[aux] != -1) {

            runner.push(pai[aux]);

            aux = pai[aux];

        }

        cout<<runner.top();

        runner.pop();

        while(!runner.empty()) {

            cout<<" "<<runner.top();

            runner.pop();
        }

        cout<<endl;
    }

}
