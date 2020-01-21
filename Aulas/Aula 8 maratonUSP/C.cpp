#include <bits/stdc++.h>
#define MAX 2010
using namespace std;
const int INF = 1e9 + 10;

int n;
int memo[MAX][MAX];
int valores[MAX];
int pesos[MAX];

int pd(int s, int i) {

    if (s < 0) return -INF;

    if(i == n) return 0;

    int &pdm = memo[i][s];
    if(pdm != -1) return pdm;

    return pdm = max(pd(s, i+1), valores[i] + pd(s - pesos[i], i+1));

}


int main() {

    memset(memo, -1, sizeof(memo));

    int s;

    cin>>s>>n;

    for(int i = 0; i < n; i++) {

        cin>>pesos[i];
        cin>>valores[i];

    }

    cout<<pd(s, 0)<<endl;


}
