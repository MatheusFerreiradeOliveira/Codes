#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

int n;
int vet[MAX];
vector<int> adj[MAX];
int visit[MAX];
int saida = 0;

int dfs(int orig, int v) {

    visit[v] = 1;

    for(int x : adj[v]) {

        if(visit[x] != 0) continue;

        if(vet[x] < vet[orig]) saida++;

        dfs(orig, x);

    }

}

int main() {

    cin>>n;

    for(int i = 1; i <= n; i++) {
        cin>>vet[i];
    }

    int m;

    cin>>m;

    for(int i = 0; i < m; i++) {
        int a, b;

        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int q;

    cin>>q;

    while(q--) {
        int p;

        cin>>p;

        if(p == 1) {
            int k;

            cin>>k;

            saida = 0;

            memset(visit, 0, sizeof visit);

            dfs(k, k);

            cout<<saida<<endl;
        }
        else {
            int k, o;

            cin>>k>>o;

            vet[k] = o;
        }
    }


}





