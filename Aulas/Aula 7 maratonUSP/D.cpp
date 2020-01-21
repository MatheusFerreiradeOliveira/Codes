#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

int v, ar;
long long int dist[MAX];
vector<pair<int, int>> adj[MAX];
long long int menorDist = 999999999999;

void dijkstra(int i, int j) {

    memset(dist, -1, sizeof(dist));

    set<pair<int, int>> lul;

    lul.insert(make_pair(0, i));

    pair<int, int> aux;

    while(!lul.empty()) {

        aux = *lul.begin();

        lul.erase(lul.begin());

        int vertice = aux.second;
        long long int distV = aux.first;

        if(dist[vertice] != -1) continue;

        dist[vertice] = distV;

        for(auto r : adj[vertice]) {

            if(dist[r.first] != -1) continue;

            lul.insert(make_pair(r.second + distV, r.first));

            if(r.first == j) {
                menorDist = min(menorDist, r.second + distV);
            }
        }

    }
}

int main() {

    int s;

    cin>>s;

    while(s--) {
        cin>>v>>ar;

        int a, b, c;

        for(int i = 0; i < ar; i ++) {
            cin>>a>>b>>c;

            adj[a].push_back(make_pair(b, c));
            //adj[b].push_back(make_pair(a, c));
        }

        int x, y;

        cin>>x>>y;

        dijkstra(x, y);

        if(menorDist != 999999999999)
            cout<<menorDist<<endl;

        else cout<<"NO"<<endl;

        menorDist = 999999999999;

        for(int p = 0; p < ar; p++) adj[p].clear();

    }

}
