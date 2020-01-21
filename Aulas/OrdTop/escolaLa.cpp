#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e5+10;
int n, m;
vector<int> adj[MAX];
priority_queue<int> lista;
vector<int> saida;
int grau[MAX];

void bfs() {
    //int ini = 0;
    while(!lista.empty()) {
        int aux = lista.top();
        lista.pop();
        saida.push_back(-aux);
        for(auto x : adj[-aux]) {
            grau[x]--;
            if(grau[x] == 0) lista.push(-x);
        }
    }
}

int main() {
    //memset(grau, 0, sizeof grau);
    scanf("%d %d", &n, &m);
    //if(n >= m) printf("*\n");
    //else {
        for(int i = 0; i < m; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            adj[a].push_back(b);
            grau[b]++;
        }
        for(int i = 0; i < n; i++) if(grau[i] == 0) lista.push(-i);
        bfs();

        if(saida.size() < n) printf("*\n");
        else {
            for(int x : saida) {
                printf("%d\n", x);
            }
        }
    //}
}
