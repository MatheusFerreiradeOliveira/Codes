#include <bits/stdc++.h>
#define MAX 210
using namespace std;

int n, m;
int vet[MAX][MAX];
int visit[MAX][MAX];

int movX[] = {0 , 1, 0, -1};
int movY[] = {1, 0, -1, 0};

int saida = 0;


void dfs(int ii, int jj) {

    saida++;

    visit[ii][jj] = 1;

    int a, b;

    for(int i = 0; i < 4; i++) {

        a = ii + movX[i];
        b = jj + movY[i];

        if(a < 0 || a >= n || b < 0 || b >= n || visit[a][b] == 1 || vet[ii][jj] > vet[a][b]) continue;


        dfs(a, b);

    }

}

int main() {

    memset(visit, 0, sizeof visit);

    cin>>n;

    int ini, fim;

    cin>>ini>>fim;

    ini--;
    fim--;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin>>vet[i][j];
        }
    }

    //int lul = 1e9+10;

    dfs(ini, fim);

    //lul = saida;

    cout<<saida<<endl;

}
