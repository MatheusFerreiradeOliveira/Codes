#include <bits/stdc++.h>
using namespace std;

const int MAX = 51;
int vet[MAX];

int main() {

    fflush(stdin);

    int n, k;

    cin>>n>>k;

    for(int o = 0; o < n; ++o) {
        cin>>vet[o];
    }

    int ans = 1e9+7;

    int cont;

    for(int i = 0; i < n; i++) {
        cout<<"Checando com "<<vet[i]<<endl;
        cont = 1;
        int sum = 0;
        for(int j = i+1; j < n && cont < k; ++j) {
            if(vet[j] == vet[i]) {
                cont++;
                continue;
            }
            int lul = 0;
            while(vet[j] > vet[i]) {
                vet[j] /= 2;
                lul++;
            }
            if(vet[j] == vet[i]){
                cout<<"Entrou aqui com "<<vet[j]<<" "<<vet[i]<<endl;
                sum += lul;
                cont++;
                if(cont == k) break;
            }
        }
        if(cont >= k) ans = min(ans, sum);
    }
    printf("%d\n", ans);
}
