#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD  = 1e9+7;
const int MAX = 10000001;

int memo[MAX][4];

int pd(int t, int x) {

    if(t == 0) return x == 3;

    if(memo[t][x] != -1) return memo[t][x];

    int cont = 0;

    for(int i = 0; i < 4; i++) {
        if(i != x){
            cont += pd(t-1, i);
            cont %= MOD;
        }
    }

    return memo[t][x] = cont%MOD;

}

int main() {

    int t;

    memset(memo, -1, sizeof memo);

    scanf("%d", &t);

    cout<<pd(t, 3)<<endl;

}
