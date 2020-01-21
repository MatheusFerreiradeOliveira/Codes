#include <bits/stdc++.h>
#define MAX1 30
#define MAX2 1000010
using namespace std ;

int n;
const int INF = 1e9+10;
int vet[MAX1];
int memo[MAX2];

void pd(int temp) {

    //if(temp < 0) return INF;
    //if(temp == 0) return 0;
    //if(i >= n) return INF;
    //if(memo[i][temp] != -1) return memo[i][temp];

    //variação da moeda ?
    for(int i = 1; i <= temp; i++) {
        memo[0] = 0;
        memo[i] = INF;
        for(int j = 0; j < n; j++){
            if(i >= vet[j]) {
                memo[i] = min(memo[i], memo[i - vet[j]] + 1);
                //pd(6) = min(pd(6-5), pd(6-4), pd(6-3), pd(6-2), pd(6-1))
            }
        }
    }
    printf("%d\n", memo[temp]);
}

int main () {

    int k;

    scanf("%d", &k);

    while(k--) {

        int t;

        scanf("%d %d", &n, &t);
        //memset(memo, -1, sizeof memo);
        //memset(vet, 0, sizeof vet);

        for(int i = 0; i < n; i++) {
            scanf("%d", &vet[i]);
        }
        pd(t);
    }

}

