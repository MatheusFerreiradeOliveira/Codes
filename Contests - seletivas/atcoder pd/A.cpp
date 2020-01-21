#include <bits/stdc++.h>
using namespace std;

int n;
const int MAX = 3010;
double moedas[MAX];
double memo[MAX][MAX];

double pd(int i, int k) {
    if(i >= n) return k >= (n/2+1);
    if(memo[i][k] != -1.0) return memo[i][k];
    return memo[i][k] = ((1.0 - moedas[i]) * pd(i+1, k)) + (moedas[i] * pd(i+1, k+1));
}

int main() {
    cin>>n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            memo[i][j] = -1.0;
        }
    }
    for(int i = 0; i < n; ++i) {
        cin>>moedas[i];
    }
    double ans = pd(0, 0);
    printf("%.10f\n", ans);
}
