#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

int n, m;
vector<int>adj[MAX];
int visit[MAX];
int dist[MAX];
map<int, int> mp;
int desc[MAX];
int maiorGrau = 0;

void bfs(int v) {

    memset(visit, 0, sizeof visit);
    memset(dist, 0, sizeof dist);
    memset(desc, 0, sizeof(desc));

    queue<int> lul;

    visit[v] = 1;

    lul.push(v);

    while(!lul.empty()) {

        int runner = lul.front();

        lul.pop();

        for(int x : adj[runner]) {

            if(visit[x] != 0) continue;

            dist[x] = 1 + dist[runner];

            desc[dist[x]]++;

            maiorGrau = max(maiorGrau, dist[x]);

            lul.push(x);
        }
    }

}

int main(){

    cin>>n>>m;

    int a;

    for(int i = 1; i <= n; i++) {
        cin>>a;

        adj[a].push_back(i);

    }

    bfs(0);

    int b;

    for(int i = 0; i < m; i++) {
        cin>>b;

        mp[dist[b]]++;
    }

    /*for(int i = 1; i <= maiorGrau; i++) {
        printf("%d %d\n", desc[i], mp[i]);
    }

    cout<<endl;
    */
    for(int i = 1; i <= maiorGrau; i++) {
        printf("%.2f ", (100*(float)mp[i])/(float)desc[i]);
    }
    cout<<endl;



}
