#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+10;
typedef long long ll;
int dist[MAX];
int gosto[MAX];
vector<int> adj[MAX];
int DistF;
int ans;
int junior;

void bfs(int v) {

    queue<int> fila;

    fila.push(v);

    dist[v] = 0;

    while(!fila.empty()) {
        int x = fila.front();
        fila.pop();

        if(dist[x] > DistF) break;

        ans = max(ans, junior^gosto[x]);

        for(int x : adj[x]) {
            if(dist[x] != -1) continue;
            dist[x] = dist[v] + 1;
            fila.push(x);
        }
    }
}

int main() {

    int n;

    cin>>n;

    for(int i = 1; i <= n; ++i) {
        cin>>gosto[i];
    }

    for(int i = 2; i <= n; ++i) {
        int a;
        cin>>a;
        adj[i].push_back(a);
        adj[a].push_back(i);
    }

    int q;

    cin>>q;

    for(int i = 0; i < q; ++i) {
        memset(dist, -1, sizeof dist);
        int c,d,j;
        cin>>c>>d>>j;
        DistF = d;
        junior = j;
        ans = 0;
        bfs(c);
        cout<<ans<<"\n";
    }


    return 0;
}


