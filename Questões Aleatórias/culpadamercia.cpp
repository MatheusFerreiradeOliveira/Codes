#include <bits/stdc++.h>
using namespace std;

bool visitados[MAX];
vector<int> adj[MAX];

void dfs(int v) {
    visistados[v] = true;
    for(int x : adj[v]) {
        if(!visitados[x]) continue;
        dfs(x);
    }
}

int main() {

    for(){
        djaisdjiasd
    }

    dfs(0);

}
