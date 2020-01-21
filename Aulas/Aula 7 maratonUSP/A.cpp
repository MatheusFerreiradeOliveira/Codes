#include <bits/stdc++.h>
#define MAX 55
using namespace std;

int n, m;
int mat[MAX][MAX];
int dist[MAX][MAX];
int maiorDist = 0;
int movX[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int movY[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

void bfs(int i, int j){

    queue <pair<int, int>> runner;

    runner.push(make_pair(i, j));

    dist[i][j] = 0;

    while(!runner.empty()) {

        pair<int, int> aux;

        aux = runner.front();

        runner.pop();

        //cout<<"Comparando com "<<mat[aux.first][aux.second]<<endl;

        int a = aux.first, b = aux.second;

        for(int k = 0; k < 8; k++) {

            a = aux.first + movX[k];
            b = aux.second + movY[k];

            //a-=65;
            //b-=65;

            //cout<<"Checando na posi "<<a<<" "<<b<<endl;

            if(a < 0 || a >= n || b < 0 || b >= m || dist[a][b] != -1) continue;

            //cout<<"Passou"<<endl;

            if(mat[a][b] == mat[aux.first][aux.second]+1){

                dist[a][b] = dist[aux.first][aux.second] + 1;

                runner.push(make_pair(a, b));

                //cout<<"Entrou"<<endl;

                //cout<<"Colocou o "<<mat[a][b]<<" na fila"<<endl;

                maiorDist = max(maiorDist, dist[a][b]);
            }

        }

    }

}

int main() {

    int rodadas = 1;

    while(cin>>n>>m && n != 0 && m != 0){

        memset(dist, -1, sizeof(dist));

        string s;

        vector<pair<int,int>> lul;

        for(int i = 0; i < n; i++) {

            cin>>s;

            for(int j = 0; j < m; j++) {
                mat[i][j] = s[j]-65;

                if(s[j] == 'A'){
                    lul.push_back(make_pair(i, j));
                }
            }
        }


        /*for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }*/

        for(int i = 0; i < lul.size(); i++){
            bfs(lul[i].first, lul[i].second);
            //cout<<"Maior dist: "<<maiorDist<<" Na posi: "<<lul[i].first<<" "<<lul[i].second<<endl;
        }

        if(lul.size() > 0) maiorDist++;

        cout<<"Case "<<rodadas<<": "<<maiorDist<<endl;

        maiorDist = 0;

        rodadas++;


        /*for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {
                cout<<dist[i][j]<<" ";
            }
            cout<<endl;
        }*/
    }

}
