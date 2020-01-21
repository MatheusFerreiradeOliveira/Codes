#include <bits/stdc++.h>
#define MAX 110
using namespace std;

vector<int> adj[MAX];
int visitados[MAX];
int n;

void dfs(int v) {

    bool mds = true;

    visitados[v] = 1;

    for(int x : adj[v]) {

        if(visitados[x] == 1) continue;

        visitados[x] = 1;

        dfs(x);

        mds = false;

    }

    if(mds){

    }

}

int main() {

    memset(visitados, 0, sizeof(visitados));

    cin>>n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++){
            if(i != j) adj[i].push_back(j);
        }
    }

    for(int i = 1; i <= n; i++) {
        dfs(i);

    }



}
