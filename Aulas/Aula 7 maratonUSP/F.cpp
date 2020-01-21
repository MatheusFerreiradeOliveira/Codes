#include <bits/stdc++.h>
#define MAX 70
using namespace std;

int menorDist = 9999999;
int movX[8] = {-1, -2, -1, -2, 1, 2, 2, 1};
int movY[8] = {-2, -1, 2, 1, 2, 1, -1, -2};
int dist[MAX][MAX];

void bfs(int i, int j, int ii, int jj) {

    memset(dist, -1, sizeof(dist));

    dist[i][j] = 0;

    queue<pair<int, int>>lul;

    lul.push(make_pair(i, j));

    while(!lul.empty()) {

        pair<int, int> aux = lul.front();

        lul.pop();

        int a = aux.first;
        int b = aux.second;


        for(int k = 0; k < 8; k++){

            a = aux.first + movX[k];
            b = aux.second + movY[k];

            if(a < 0 || a >= 8 || b < 0 || b >= 8 || dist[a][b] != -1) continue;

            dist[a][b] = dist[aux.first][aux.second]+1;

            lul.push(make_pair(a, b));

            if(a == ii && b == jj) {
                menorDist = min(menorDist, dist[a][b]);
            }

        }

    }

}


int main() {

    int n;

    cin>> n;

    while(n--) {

        string s;

        int x, y, xx, yy;

        cin>>s;

        y = s[0]-97;
        x = s[1]-49;

        cin>>s;

        yy = s[0]-97;
        xx = s[1]-49;

        //cout<<x<<" "<<y<<endl;
        //cout<<xx<<" "<<yy<<endl;

        bfs(x, y, xx, yy);

        if(menorDist != 9999999) cout<<menorDist<<endl;

        else cout<<0<<endl;

        menorDist = 9999999;

    }

}
