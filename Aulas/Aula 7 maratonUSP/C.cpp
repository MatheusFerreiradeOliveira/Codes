#include <bits/stdc++.h>
#define MAX 110
using namespace std;

int n;
int mat[MAX][MAX];
int maiorDist = 9999999;
int dist[MAX][MAX];

int movX[] = {-1, 0, 1, 0};
int movY[] = {0, 1, 0, -1};

void dijkstra(int i, int j) {

    memset(dist, -1, sizeof(dist));

    set<pair<int, pair<int, int>>> lul;

    dist[i][j] = 0;

    //queue <int, pair<int, int>> runner;

    lul.insert(make_pair(0, make_pair(i, j)));

    while(!lul.empty()) {

        pair <int, pair<int, int>> aux = *lul.begin();

        lul.erase(lul.begin());

        pair <int, int> vertice;
        int distV;

        distV = aux.first;

        vertice.first = aux.second.first;
        vertice.second = aux.second.second;

        for(int k = 0; k < 4; k++) {

            vertice.first = aux.second.first + movX[k];
            vertice.second = aux.second.second + movY[k];

            if(vertice.first < 0 || vertice.first >= n || vertice.second < 0 || vertice.second >= n || dist[vertice.first][vertice.second] != -1)
                continue;

            dist[vertice.first][vertice.second] = distV+mat[vertice.first][vertice.second];

            if(vertice.first == n-1 && vertice.second == n-1) {
                maiorDist = min(maiorDist, dist[vertice.first][vertice.second]);
            }

            lul.insert(make_pair(distV+mat[vertice.first][vertice.second], make_pair(vertice.first, vertice.second)));

        }

    }


}

int main() {

    cin>>n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin>>mat[i][j];
        }
    }

    dijkstra(0, 0);

    cout<<maiorDist<<endl;

    /*for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<dist[i][j];
        }
        cout<<endl;
    }*/


}
