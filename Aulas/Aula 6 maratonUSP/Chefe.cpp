#include <bits/stdc++.h>
#define MAX 510
using namespace std;

int n, m, l;
int ages[MAX];
vector<int>adj[MAX];
int visit[MAX];
int menorId = 1e9 + 10;
int id[MAX];

void dfs(int v) {

    visit[v] = 1;

    for(int x : adj[v]) {

        if(visit[x] == 1) continue;

        menorId = min(menorId, ages[id[x]]);

        dfs(x);
    }

}

int main() {

    //memset(father, -1, sizeof father);

    cin>>n>>m>>l;

    for(int i = 1; i <= n; i++) {
        cin>>ages[i];
        id[i] = i;
    }

    int a, b;

    for(int i = 0; i < m; i++) {
        cin>>a>>b;
        adj[b].push_back(a);
        //father[a] = b;
    }

    char davez;
    int aux1, aux2;

    for(int i = 0; i < l; i++) {
        cin>>davez;

        if(davez == 'P') {
            memset(visit, 0, sizeof visit);
            cin>>aux1;
            dfs(aux1);
            if(menorId == 1e9 + 10)
                cout<<"*"<<endl;
            else
                cout<<menorId<<endl;
            menorId = 1e9 + 10;
        }
        else {
            cin>>aux1>>aux2;
            //vector<int> lul;
            for(int i = 1; i <= n; ++i) {
                if(id[i] == aux1) {
                    id[i] = aux2;
                    //lul = ages[i];
                    //ages[i] = ages[aux2];
                }
                if(id[i] == aux2) id[i] = aux1;
            }
            int lul;
            lul = ages[aux1];
            ages[aux1] = ages[aux2];
            ages[aux2] = lul;
        }
    }

}
