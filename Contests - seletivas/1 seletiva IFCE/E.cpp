#include <bits/stdc++.h>
#define MAX1 60
#define MAX2 1010
using namespace std;

int n, m;
const int INF = 1e9 + 10;
pair<int, int> frase[MAX1];
int saidaT = 0;
int memo[MAX1][MAX2];

int dp(int i, int T) {

    if(T > n) return -INF;

    //if(T + frase[i].first > n) return 0;

    if(i > m) return 0;

    if(memo[i][T] != -1) return memo[i][T];

    return memo[i][T] = max(dp(i+1, T), frase[i].second + dp(i+1, T + frase[i].first));

}

int main() {

    int cont = 1;

    while(cin>>n>>m && n!= 0 && m!= 0){

        memset(memo, -1, sizeof memo);

        for(int i = 1; i <= m; i++) {
            cin>>frase[i].first>>frase[i].second;
        }

        saidaT = dp(1, 0);

        cout<<"Teste "<<cont<<endl;

        cout<<saidaT<<endl;

        cont++;

        cout<<endl;

    }





}

