#include <bits/stdc++.h>
using namespace std;

const int MAX = 101;
const int INF = 1e9+10;

int main() {

    int distancia[MAX][MAX];
    int n, m;

    scanf("%d %d", &n, &m);

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++)
            distancia[i][j] = INF;
    }

    for(int i = 0; i < m; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        distancia[a][b] = c;
    }

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++){
            cout<<distancia[i][j]<<" ";
        }
        cout<<endl;
    }

    int maior = -3;

    for(int k = 1;k <= n;k++)
        for(int i = 1;i <= n;i++)
            for(int j = 1;j <= n;j++)
                distancia[i][j] = min(distancia[i][j], distancia[i][k] + distancia[k][j]);

    for(int k = 1;k <= n;k++)
        for(int i = 1;i <= n;i++)
            for(int j = 1;j <= n;j++)
                if(distancia[i][j] != INF) maior = max(maior, distancia[i][j]);


    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++){
            cout<<distancia[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<maior<<"\n";
}
