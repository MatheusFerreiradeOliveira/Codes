#include <bits/stdc++.h>
using namespace std;
#define MAX 10010

const int INF = 1e9 + 10;
int c;
int vet[MAX];
int memo[MAX];

int dp(int i) {

    if(vet[i] == 0) return INF;

    if(i == c) return 0;

    if(memo[i] != 0) return memo[i];

    return memo[i] = min(1 + dp(i+1), 1 + dp(i+2));

}

int main() {

    memset(memo, 0, sizeof memo);

    cin>>c;

    for(int i = 1; i <= c; i++) {
        cin>>vet[i];
    }

    int saida = dp(1);

    if(saida >= INF)
        cout<<-1<<endl;
    else
        cout<<saida<<endl;
}
