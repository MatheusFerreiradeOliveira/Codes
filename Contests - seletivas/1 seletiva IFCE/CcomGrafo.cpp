#include <bits/stdc++.h>
#define MAX 2000010
using namespace std;

int n;

vector<char> saida;

vector<int> adj[MAX];

int visit[MAX];

char letras[MAX];


void dfs(int v) {

    visit[v] = 1;

    if(v == 1) return;

    saida.push_back(letras[v]);

    for(int x : adj[v]) {
        if(visit[x] != 0) continue;

        dfs(x);
    }

}

int main() {

    memset(visit, 0, sizeof visit);

    cin>>n;

    for(int i = 0; i < n; i++) {
        int a, c;
        char b;
        cin>>a>>b>>c;

        letras[a] = b;

        adj[a].push_back(c);
    }

    dfs(0);

    for(auto x : saida){
        cout<<x;
    }
    cout<<endl;



}


