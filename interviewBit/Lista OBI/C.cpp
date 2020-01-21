#include <bits/stdc++.h>
#define MAX 110
using namespace std;

int explodido[MAX][MAX];
int n, m;
char mat[MAX][MAX];
int saida = 0;
int visit[MAX][MAX];
int movX[4] = {1, 0, -1, 0};
int movY[4] = {0, -1, 0, 1};
bool morreu = true;

void dfs(int ii, int jj) {

    visit[ii][jj] = 1;

    int a;
    int b;

    for(int k = 0; k < 4; k++) {
        a = ii + movX[k];
        b = jj + movY[k];
        if( a < 1 || a > n || b < 1 || b > m ) continue;
        if(visit[a][b] == 1 || mat[a][b] == '.') continue;
        if(explodido[a][b] == 0)
            morreu = false;
        dfs(a, b);
    }
}

int main() {

    memset(explodido, 0, sizeof explodido);

    cin>>n>>m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin>>mat[i][j];
        }
    }

    int q;

    cin>>q;

    for(int i = 0; i < q; i++) {
        int ii, jj;
        cin>>ii>>jj;
        if(mat[ii][jj] == '#'){
            explodido[ii][jj] = 1;
        }
    }

    memset(visit, 0, sizeof visit);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(mat[i][j] == '#' && visit[i][j] == 0){
                if(explodido[i][j] == 0)
                    morreu = false;
                dfs(i, j);
                if(morreu)
                    saida++;
                morreu = true;
            }
        }
    }
    cout<<saida<<endl;
}


