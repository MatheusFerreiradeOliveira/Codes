#include <bits/stdc++.h>
#define MAX 210
using namespace std;

int n, m;
int vet[MAX][MAX];
int visit[MAX][MAX];

int movX[] = {1, 0 , -1, 0};
int movY[] = {0, 1, 0, -1};

int saida = 0;


void dfs(int ii, int jj) {

    saida++;

    visit[ii][jj] = 1;

    int a, b;

    for(int i = 0; i < 4; i++) {

        a = ii + movX[i];
        b = jj + movY[i];

        if(a < 0 || a >= n || b < 0 || b >= m || visit[a][b] == 1) continue;

        if(vet[ii][jj] == vet[a][b]) {

            dfs(a, b);
        }

    }

}

int main() {

    memset(visit, 0, sizeof visit);

    cin>>n>>m;


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>vet[i][j];
        }
    }

    int lul = 1e9+10;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {

            if(visit[i][j] == 1) continue;

            dfs(i, j);

            //cout<<"Saida = "<<saida<<endl;


            lul = min(lul, saida);

            saida = 0;
        }
    }

    cout<<lul<<endl;

}
