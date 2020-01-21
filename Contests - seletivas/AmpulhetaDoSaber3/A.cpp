#include <bits/stdc++.h>
#define MAX 10000010
using namespace std;

int mp[MAX];

int main(){

    int n, m;

    scanf("%d %d", &n, &m);

    memset(mp, 0, sizeof mp);

    int saida = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int aux;
            scanf("%d", &aux);
            mp[aux]++;

            if(mp[aux] == 1) saida++;
        }
    }

    printf("%d", saida);


}

