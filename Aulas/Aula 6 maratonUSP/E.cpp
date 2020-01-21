#include <bits/stdc++.h>
#define MAX 510
using namespace std;

int visitados[MAX][MAX];
char mat[MAX][MAX];
int cont = 1;
int contP = 0;
int n, m, z;

void dfs(int i, int j) {
    visitados[i][j] = 1;

    for(int h = 0; h < 4 && cont < contP - z; h++) {
        if((i+1 < n) && visitados[i+1][j] == 0 && mat[i+1][j] == '.') {
            cont++;
            dfs(i+1, j);
        }
        else if((i-1 >= 0) && visitados[i-1][j] == 0 && mat[i-1][j] == '.') {
            cont++;
            dfs(i-1, j);
        }
        else if((j-1 >= 0) && visitados[i][j-1] == 0 && mat[i][j-1] == '.') {
            cont++;
            dfs(i, j-1);
        }
        else if((j+1 < m) && visitados[i][j+1] == 0 && mat[i][j+1] == '.') {
            cont++;
            dfs(i, j+1);
        }
    }
}

int main() {

    memset(visitados, 0, sizeof(visitados));

    int fi = -1, fj;

    cin>>n>>m>>z;

    //char mat[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cin>>mat[i][j];
            if(mat[i][j] == '.'){
                if(fi == -1) {
                    fi = i;
                    fj = j;
                }
                contP ++;
            }
        }

    /*for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            printf("%c", mat[i][j]);*/


    dfs(fi, fj);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            if(mat[i][j] == '.' && visitados[i][j] == 0){
                mat[i][j] = 'X';
            }
        }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
}
