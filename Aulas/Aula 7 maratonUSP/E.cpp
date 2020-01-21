#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

int n;
vector<int> adj[MAX];
int grau[MAX];
int pai[MAX];
int maior = 0, idMaior;
int dist[MAX];

void bfs(int v) {

    memset(dist, -1, sizeof(dist));

    queue < int > lul;

    lul.push(v);

    dist[v] = 0;

    while(!lul.empty()) {

        int aux;

        aux = lul.front();

        lul.pop();

        for(int x : adj[aux]) {
            if(dist[x] != -1) continue;

            dist[x] = dist[aux]+1;

            pai[x] = aux;

            lul.push(x);

            if(grau[x] == 1){
                if(maior < dist[x]) {
                    maior = dist[x];
                    idMaior = x;
                }
            }
        }

    }

}

int main() {

    memset(pai, 0, sizeof(pai));
    memset(grau, 0, sizeof(grau));

    cin >> n;

    int a, b;

    for(int i = 0; i < n - 1; i ++ ) {
        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);
        grau[a]++;
        grau[b]++;
    }

    bfs(1);

    maior = 0;

    bfs(idMaior);

    cout<<maior<<endl;

    //cout<<maior<<endl;






}

