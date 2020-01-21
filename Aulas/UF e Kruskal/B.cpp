#include <bits/stdc++.h>
#define MAX 200010
using namespace std;

vector<int> adj[MAX];
int visit[MAX];


void dfs(int i) {

    //cout<<"visitando o "<<i<<endl;

    visit[i] = 1;

    for(auto x : adj[i]) {

        if(visit[x] == 1) continue;

        dfs(x);

    }

}

int main() {

    memset(visit, 0, sizeof(visit));


    int n, m;

    cin>>n>>m;

    int a, b;

    for(int i = 0; i < m; i++) {

        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int saida = 0;

    for(int i = 1; i <= n; i++) {
        if(visit[i] == 0) {
            saida++;
            dfs(i);
        }
    }

    cout<<saida<<endl;

}
