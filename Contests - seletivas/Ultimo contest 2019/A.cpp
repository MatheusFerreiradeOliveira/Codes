#include <bits/stdc++.h>
using namespace std;

int n, m;
const int MAX = 1e3+10;
bool visit[MAX];
vector<int> adj[MAX];
int cont;

void dfs(int v) {
    cont++;
    visit[v] = 1;
    for(int x : adj[v]) {
        if(visit[x]) continue;
        dfs(x);
    }
}

int main() {

    cin>>n>>m;

    for(int i = 0; i < m; ++i) {
        int a, b, c;
        cin>>a>>b>>c;
        adj[a].push_back(b);
        if(c == 2) adj[b].push_back(a);
    }

    int ans = 0, id = 0;

    for(int i = 1; i <= n; ++i) {
        memset(visit, 0, sizeof visit);
        cont = 0;
        dfs(i);
        if(cont > ans) {
            ans = cont;
            id = i;
        }
    }

    cout<<id<<"\n";

}
