#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

const int INF = 1e9+10;
int n;
vector<int> adj[MAX];
int dist[MAX];
int seen[MAX];

void bfs(int v) {
    memset(seen, 0, sizeof seen);
    memset(dist, 0, sizeof dist);

    dist[v] = 0;

    queue<int> lul;

    lul.push(v);

    while(!lul.empty()) {

        int aux = lul.front();

        lul.pop();

        if(seen[aux] != 0) continue;

        seen[aux] = 1;

        for(int x : adj[aux]) {

            if(dist[x] != 0) continue;

            dist[x] = dist[aux] + 1;

            lul.push(x);
        }

    }

}


int main() {

    int ini, fim;

    cin>>n>>ini>>fim;

    for(int i = 1; i < n; i++) {
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs(ini);

    cout<<dist[fim]<<endl;

}


