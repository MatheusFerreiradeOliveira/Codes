#include <bits/stdc++.h>
#define MAX 510
using namespace std;


int main () {

    while(cin>>n>>m && n!= 0 && m!= 0) {
        int ii, jj;

        bool achou = false;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++){
                cin>>vet[i][j];
                if(!achou && vet[i][j] == '.'){
                    ii = i;
                    jj = j;
                    achou = true;
                }
            }
        }

        bfs(ii, jj);

        bfs(px, py);

        cout<<maiorDist<<endl;

    }

}
