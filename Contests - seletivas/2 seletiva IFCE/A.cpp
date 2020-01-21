#include <bits/stdc++.h>
#define MAX1 30
#define MAX2 1000010
using namespace std ;

int n;
const int INF = 1e9+10;
int vet[MAX1];
int memo[MAX1][MAX2];

int pd(int i, int temp) {

    if(temp == 0) return 0;

    if(i >= n) return INF;

    int menor = INF;

    if(memo[i][temp] != -1) return memo[i][temp];

    for(int j = i; j < n; j++) {
        if(temp >= vet[j])
            menor = min(pd(j+1, temp), 1 + pd(j, temp - vet[j]));
    }
    //if(vet[i] > (t-temp)) return memo[i][temp] = pd(i+1, temp);
    //return memo[i][temp] = min(pd(i+1, temp), 1 + pd(i, temp + vet[i]));
    return memo[i][temp] = menor;
}

int main () {

    int k;

    scanf("%d", &k);

    while(k--) {

        int t;

        scanf("%d %d", &n, &t);
        memset(memo, -1, sizeof memo);
        //memset(vet, 0, sizeof vet);

        for(int i = 0; i < n; i++) {
            scanf("%d", &vet[i]);
        }
        printf("%d\n", pd(0, t));
    }

}
