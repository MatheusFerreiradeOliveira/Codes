#include <bits/stdc++.h>
#define MAX 110
using namespace std;

vector <int> adj[MAX];
int visitados[MAX];
//int pai[MAX];

void dfs(int v) {
    visitados[v] = 1;
    //visit++;
    for(int x : adj[v]){
        if(visitados[x] == 1) continue;
        //pai[x] = v;
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
        if(visitados[i] == 0) {
            grupos++;
            dfs(i);
            //cout<<visit<<" "<<cont<<endl;
            //if(visit == cont) cout<<"FHTAGN"<<endl;
            //else cout<<"NO"<<endl;
            //visit = cont = 0;
        }
    }

    if(grupos == 1 && n == m)
        cout<<"FHTAGN!"<<endl;
    else
        cout<<"NO"<<endl;

}
