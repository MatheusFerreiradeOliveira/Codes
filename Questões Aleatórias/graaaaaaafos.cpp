#include <bits/stdc++.h>
using namespace std;

const int MAX = 200001;
int n, m;
vector<int> adj[MAX];
int visit[MAX];
int cor[MAX];
int pai[MAX];
set<int> runner;

void bfs(int i) {

    queue<int> lul;

    cor[i] = 1;

    lul.push(i);

    while(!lul.empty()) {
        int aux = lul.front();

        lul.pop();

        if(visit[aux] == 1) continue;

        visit[aux] = 1;

        runner.insert(cor[aux]);

        int cont = 1;

        for(int x : adj[aux]) {
            pai[x] = aux;
            if(cor[x] == 0) {
                for(;cont <= 200001; ++cont) {
                    if(cont != cor[aux] && cont != cor[pai[aux]]) {
                        cor[x] = cont;
                        cont++;
                        break;
                    }
                }
            }
            lul.push(x);
        }
    }

}

int main() {

    scanf("%d", &n);

    for(int i = 1; i < n; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs(1);

    cout<<runner.size()<<"\n";

    for(int i = 1; i <= n; i++) {
        cout<<cor[i]<<" ";
    }
    cout<<"\n";


}
