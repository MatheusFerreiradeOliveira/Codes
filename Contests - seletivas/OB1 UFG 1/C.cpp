#include <bits/stdc++.h>
#define MAX 1010
using namespace std;

int n;
int dist[MAX][MAX];
int saida = 0;

void caminho(int s, int i, int j) {

    dist[i][j] = dist[i-1][j-1] + dist[i-2][j-2];

    if(s < dist[i][j]) return;

    s -= dist[i][j];

    saida++;

    caminho(s, i+1, j+1);
}
int main() {

    dist[0][1] = 1;
    dist[1][2] = 1;

    cin>>n;

    caminho(n, 2, 3);

    cout<<saida<<endl;
}



