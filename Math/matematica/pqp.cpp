#include <bits/stdc++.h>
using namespace std;

const int MAX = 51;
int vet[MAX];

int main() {

    fflush(stdin);

    int n, k;

    cin>>n>>k;

    for(int o = 0; o < n; ++o) {
        int a;
        cin>>a;
        vet[o] = a;
    }

    int ans = 1e9+7;

    int cont;

    for(int T = 0; T < n; T++) {
        cout<<"Checando com "<<vet[T]<<endl;
        cont = 1;
        int sum = 0;
        for(int j = T+1; j < n && cont < k; ++j) {
            if(vet[j] == vet[T]) {
                cont++;
                continue;
            }
            int lul = 0;
            while(vet[j] > vet[T]) {
                if(vet[j] == 0) break;
                vet[j] = vet[j]/2;
                lul++;
            }
            if(vet[j] == vet[T]){
                //cout<<"Entrou aqui com "<<vet[j]<<" "<<vet[i]<<endl;
                sum += lul;
                cont++;
                if(cont == k) break;
            }
        }
        if(cont >= k) ans = min(ans, sum);
    }
    printf("%d\n", ans);
}

