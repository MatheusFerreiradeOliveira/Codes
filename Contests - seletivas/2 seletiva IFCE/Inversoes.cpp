#include <bits/stdc++.h>
#define MAX 10010
using namespace std;

int a, b;

int reverter(int lul) {
    int rev = 0;
    while(lul != 0) {
        rev *= 10;
        rev += lul%10;
        lul /= 10;
    }
    return rev;
}

int adicionar(int lul) {
    return lul+1;
}

int dist[MAX];
int seen[MAX];
int saidaF = -1;

void bfs(int ini, int fim) {

    if(ini == fim && saidaF == -1) saidaF = 0;

    memset(dist, 0, sizeof dist);
    memset(seen, 0, sizeof seen);
    dist[ini] = 0;
    queue<pair<int, int>> runner;
    runner.push({ini, 0});

    while(!runner.empty()){
        pair<int, int> aux = runner.front();

        runner.pop();

        int dist = aux.second;
        int vertice = aux.first;

        if(seen[vertice] != 0) continue;

        seen[vertice] = 1;

        int soma, r;

        soma = adicionar(vertice);

        if(soma >= MAX) continue;

        r = reverter(vertice);

        if(r >= MAX) continue;

        if((soma == fim || r == fim) && saidaF == -1) saidaF = dist+1;

        else {
            if(seen[soma] != 1){
                runner.push({soma, dist+1});
            }
            if(seen[r] != 1){
                runner.push({r, dist+1});
            }
        }
    }

}




int main() {

    int k;

    cin>>k;

    while(k--) {

        saidaF = -1;

        scanf("%d %d", &a, &b);

        //cout<<reverter(a)<<endl;
        //cout<<reverter(b)<<endl;

        //cout<<adicionar(a)<<endl;
        //cout<<adicionar(b)<<endl;

        bfs(a, b);

        printf("%d\n", saidaF);
    }

}
