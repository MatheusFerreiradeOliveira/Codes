#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int mat[n][m];

    memset(mat, 0, sizeof(mat));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            cin>>mat[i][j];
        }
    }

    int q;

    cin>>q;

    long long saida;

    while(q--) {

        int davez, a, b, c, d;

        cin>>davez;

        if(davez == 0) {
            saida = 0;
            cin>>a>>b>>c>>d;

            a--;
            b--;
            c--;
            d--;

            for(int i = a; i <= c; i++){
                for(int j = b; j <= d; j++) {
                    saida += mat[i][j];
                }
            }

            cout<<saida<<endl;

        }
        else {
            cin>>a>>b>>c;
            a--;
            b--;

            mat[a][b]+=c;
        }
    }
}






