#include <bits/stdc++.h>
#define MAX 10010
using namespace std;

int n;
int vet[MAX];
const int INF = 1e9+10;
int memo[MAX];

int dp(int i) {

    if(vet[i] == 0) return INF;

    //if(i > n) return INF;

    if(i == n) return 0;

    if(memo[i] != -1) return memo[i];

    return memo[i] = min(1 + dp(i+1), 1 + dp(i+2));

}


int main() {

    memset(memo, -1, sizeof memo);

    int saida = 0;

    cin>>n;

    for(int i = 1; i <= n; i++) {
        cin>>vet[i];
    }

    saida = dp(1);

    if(saida >= INF)
        cout<<-1<<endl;
    else
        cout<<saida<<endl;

}

