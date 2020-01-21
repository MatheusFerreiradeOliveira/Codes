#include <bits/stdc++.h>
#define MAX 1010
using namespace std;

int visitados[MAX];
vector < int > adj[MAX];


void dfs(int v){
    //cout<<"Visitou o  "<<v<<endl;
    visitados[v] = 1;

    for(int x : adj[v]) {
        if(visitados[x] == 1) continue;
        dfs(x);
    }
}


int main() {

    memset(visitados, 0, sizeof(visitados));
    int n, m;
    cin>>n>>m;

    int a, b;

    for(int i = 0; i < m; i++) {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int grupos = 0;

    for(int i = 1; i <= n; i++) {
        if(visitados[i] == 0){
            grupos++;
            dfs(i);
        }
    }

    cout<<grupos<<endl;

}
