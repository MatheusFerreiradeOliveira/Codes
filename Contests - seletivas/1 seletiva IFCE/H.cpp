#include <bits/stdc++.h>
#define MAX 510
using namespace std;

const int INF = 1e9+10;
int n, m;
int mat[MAX][MAX];
int dist[MAX][MAX];
int menorDist = INF;
int seen[MAX][MAX];

void bfs(int ii, int jj) {

    dist[ii][jj] = 0;

    queue<pair<int, int>> lul;

    lul.push({ii, jj});

    while(!lul.empty()) {

        pair<int, int> aux = lul.front();
        lul.pop();

        int p = aux.first;
        int s = aux.second;

        if(seen[p][s] != 0) continue;

        seen[p][s] = 1;

        for(int i = p-2; i <= (p+2); i++) {
            for(int j = s-2; j <= (s+2); j++) {
                if(i < 0 || i >= n || j < 0 || j >= m
                   || mat[i][j] == 0 || seen[i][j] != 0 || dist[i][j] != 0) continue;

                dist[i][j] = 1 + dist[p][s];

                //seen[i][j] = 1;

                if(i == n-1 && j == m-1){
                    menorDist = min(menorDist, dist[i][j]);
                }

                lul.push({i, j});
            }
        }
    }
}

int main() {

    memset(seen, 0, sizeof seen);
    memset(dist, 0, sizeof dist);

    cin>>n>>m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>mat[i][j];
        }
    }

    bfs(0, 0);

    if(menorDist >= INF)
        cout<<-1<<endl;
    else
        cout<<menorDist<<endl;


}
