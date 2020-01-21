#include <bits/stdc++.h>
#define MAX 70
using namespace std;

int xt, yt;
//int mat[MAX][MAX];
int dist[MAX][MAX];
int maiorDist = 0;
int movX[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int movY[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
string mov[8] = {"LD", "D", "RD", "R", "RU", "U", "LU", "L"};
int saida = 0;

pair<int, int> pai[MAX][MAX];

string moves [MAX][MAX];

stack <string> caminho;


void fazCaminho(int xx, int yy) {

    if(moves[xx][yy] == "-1") return;

    saida++;

    caminho.push(moves[xx][yy]);

    fazCaminho(pai[xx][yy].first, pai[xx][yy].second);
}

void bfs(int i, int j){

    memset(dist, -1, sizeof(dist));

    queue <pair<int, int>> runner;

    runner.push(make_pair(i, j));

    dist[i][j] = 0;

    while(!runner.empty()){

        pair<int, int> aux = runner.front();

        runner.pop();

        int a, b, k;

        for(k = 0; k < 8; k++) {
            a = aux.first + movX[k];
            b = aux.second + movY[k];

            if(a < 0 || a > 7 || b < 0 || b > 7 || dist[a][b] != -1) continue;

            pai[a][b] = make_pair(aux.first, aux.second);

            moves[a][b] = mov[k];

            dist[a][b] = dist[aux.first][aux.second] + 1;

            runner.push(make_pair(a, b));

            //cout<<"A = "<<a<<" B = "<<b<<endl;

            if(a == xt && b == yt) {
                //cout<<"Entrou"<<endl;
                fazCaminho(a, b);
                break;
            }

        }

    }

}

int main() {

    memset(pai, -1, sizeof(pai));

    for(int i = 0; i < 8; i ++) {
        for(int j = 0; j < 8; j++) {
            moves[i][j] = "-1";
        }
    }

    string s, p;

    int xr, yr;

    cin>>s;

    xr = s[1] - 49;
    yr = s[0] - 97;

    cin>>p;

    xt = p[1] - 49;
    yt = p[0] - 97;

    bfs(xr, yr);

    cout<<saida<<endl;

    if(saida != 0)
        for(string x = caminho.top(); !caminho.empty() ; caminho.pop()) {
            cout<<x<<endl;
            x = caminho.top();
        }

}

