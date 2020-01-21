#include <bits/stdc++.h>
#define MAX 5010
using namespace std ;

int n, t;
const int INF = 1e9+10;
pair<int, int> vet[MAX];
int memo[MAX][MAX];

int pd(int i, int temp) {

    if(temp > t) return -INF;

    if(i >= n) return 0;

    if(memo[i][temp] != -1) return memo[i][temp];

    return memo[i][temp] = max(pd(i+1, temp), vet[i].second + pd(i, temp + vet[i].first));

}

int main () {

    cin>>n>>t;

    memset(memo, -1, sizeof memo);
    memset(vet, 0, sizeof vet);

    for(int i = 0; i < n; i++) {
        int a, b;
        cin>>a>>b;
        vet[i].first = a;
        vet[i].second = b;
    }
    cout<<pd(0, 0)<<endl;
}

