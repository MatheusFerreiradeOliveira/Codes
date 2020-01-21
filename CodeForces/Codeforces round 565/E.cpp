#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+10;


int main() {

    int n;

    scanf("%d", &n);

    while(n--) {

        int k, m;

        scanf("%d %d", &k, &m);

        pair <int, int> grau[k+1];

        grau[0].first = INF;
        grau[0].second = INF;

        for(int i = 0; i < m; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            grau[a].first++;
            grau[a].second = a;
            grau[b].first++;
            grau[b].second = b;
        }

        sort(grau, grau+k);

        printf("%d\n", k/2);

        for(int i = 0; i < k/2; i++) {
            printf("%d ", grau[i].second);
        }
        printf("\n");
    }

}
