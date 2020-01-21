#include <bits/stdc++.h>
using namespace std;
#define MAX 1010

int mat[MAX][MAX];
int visitados[MAX][MAX];
int saida = 1;
int n, m;
bool achou = false;

void busca(int i, int j){

    visitados[i][j] = 1;
    //bool tudoZero = true;

    for(int a = 0; a < 4 && !achou; a++){

        if((i+1 < n) && visitados[i+1][j] == 0 && mat[i+1][j] != 0){
            //cout<<"desceu"<<endl;

            visitados[i+1][j] = 1;

            saida++;

            if(mat[i+1][j] == 3){
                achou = true;
                break;
            }

            busca(i+1, j);
        }

        else if((i-1 >= 0) && visitados[i-1][j] == 0 && mat[i-1][j] != 0){
            //cout<<"subiu"<<endl;

            visitados[i-1][j] = 1;

            saida++;

            if(mat[i-1][j] == 3) {
                achou = true;
                break;
            }

            busca(i-1, j);
        }

        else if((j+1 < m) && visitados[i][j+1] == 0 && mat[i][j+1] != 0){
            //cout<<">>"<<endl;

            visitados[i][j+1] = 1;

            saida++;

            if(mat[i][j+1] == 3){
                achou = true;
                break;
            }
            busca(i, j+1);
        }

        else if((j-1 >= 0) && visitados[i][j-1] == 0 && mat[i][j-1] != 0){
            //cout<<"<<"<<endl;

            visitados[i][j-1] = 1;

            saida++;

            if(mat[i][j-1] == 3){
                achou = true;
                break;
            }

            busca(i, j-1);
        }

        else {
            //cout<<"Volta"<<endl;
            saida--;
            break;
        }

    }

}

int main(){

    //int n, m;
    int i2, j2;

    cin>>n>>m;

    memset(visitados, 0, sizeof(visitados));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
            if(mat[i][j] == 2) {
                i2 = i;
                j2 = j;
            }
        }
    }

    busca(i2, j2);

    /*for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            printf("%d ", visitados[i][j]);
        }
        cout<<endl;
    }*/

    cout<<saida<<endl;
}
