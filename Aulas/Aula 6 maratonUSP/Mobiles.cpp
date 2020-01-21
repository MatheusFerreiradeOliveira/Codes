#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

int n;
vector<int> adj[MAX];
vector<int> valores[MAX];
int visit[MAX];
int pai[MAX];
bool deucerto = true;


void dfs(int v, int sz) {

    visit[v] = 1;

    int saida = 0;

    for(int x : adj[v]) {

        if(adj[x].size() == 0)

        dfs(x);

    }

    return saida;
}

int main() {

    cin>>n;

    int a, b;
    for(int i = 0; i < n; i++) {
        cin>>a>>b;
        adj[b].push_back(a);

        pai[a] = b;
    }

    //int runner = adj[0].size();

    //cout<<"Runner = "<<runner<<endl;

    dfs(0);

    if(deucerto)
        cout<<"bem"<<endl;
    else
        cout<<"mal"<<endl;
}
