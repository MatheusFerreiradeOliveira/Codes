#include <bits/stdc++.h>
#define MAX 1010
using namespace std;

int memo[MAX][MAX];
int vet[MAX];

int pd(int n, int x) {

    if(x < 0 ) return 0;

    else if (n == 0) return x == 0;//vetor indexado de 1 a n;

    else if(x == 0) return 1;

    if(memo[n][x] != 0) return memo[n][x];

    return memo[n][x] = pd(n - 1, x - vet[n]) || pd(n-1, x);

}


int main() {

    int n;

    cin>>n;

    //int vet[n + 1];

    for(int i = 1; i <= n; i++) {
        cin>>vet[i];
    }

    int x;

    cin>>x;

    int saida = pd(n, x);

    if(saida != 0)
        cout<<"Yes"<<endl;

}

