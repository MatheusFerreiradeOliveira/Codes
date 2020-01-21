#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map <int, int> ma;
    int m[n][n];
    int somalinha[n];
    int somacoluna[n];
    int somadiagonal = 0;
    memset(somalinha, 0, sizeof(somalinha));
    memset(somacoluna, 0, sizeof(somacoluna));
    bool deucerto = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &m[i][j]);

            if(ma[m[i][j]] == 1) deucerto = false;

            else ma[m[i][j]] = 1;

            if(i == j) somadiagonal+=m[i][j];

            somalinha[i]+=m[i][j];

            somacoluna[j]+=m[i][j];
        }
    }
    if(deucerto)
        for(int i = 0; i < n; i++){
            if(somalinha[i] != somacoluna[i] || somalinha[i] != somadiagonal){
                deucerto = false;
                break;
            }
        }
    deucerto ? printf("%d\n", somalinha[0]) : printf("%d\n", 0);
}

