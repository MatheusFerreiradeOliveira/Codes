#include <bits/stdc++.h>
#define MAX 1010
using namespace std;

vector < int > adj[MAX];
int visitados[MAX];
int escritos[MAX];

void dfs(int v) {
    visitados[v] = 1;

    for(int x : adj[v]) {
        if(visitados[x] == 1) continue;
        dfs(x);
    }
}


int main() {
    int s, i = 1;

    cin>>s;


    while(i <= s) {

        memset(visitados, 0, sizeof(visitados));
        memset(escritos, 0, sizeof(escritos));


        int n, m;

        cin>>n>>m;

        char a, b;

        for(int i = 0; i < m; i++) {
            cin>>a>>b;
            adj[a-97].push_back(b-97);
            adj[b-97].push_back(a-97);
        }


        cout<<"Case #"<<i<<":\n";
        int grupos = 0;

        for(int i = 0; i < n; i++) {
            if(visitados[i] == 1) continue;

            dfs(i);
            grupos++;

            for(int j = 0; j < n; j++){

                if(visitados[j] == 1 && escritos[j] == 0){
                    cout<<(char)(j+97)<<",";
                    escritos[j] = 1;
                }
            }
            cout<<endl;
        }

        cout<<grupos<<" connected components"<<endl;
        cout<<endl;
        i++;


        for(int i = 0; i < n; i++) adj[i].clear();
    }
}
