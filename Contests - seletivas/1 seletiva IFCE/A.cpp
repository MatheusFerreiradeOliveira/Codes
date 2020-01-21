#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    double vet[n];
    int dist[n];

    int saida = 0;

    memset(dist, 0, sizeof(dist));

    for(int i = 0; i < n; i++) {
        int a, b;
        cin>>a>>b;

        vet[i] = sqrt((b*b)+(a*a));

        if(i > 0) {
            if(vet[i] > vet[i-1]){
                saida += 1 + dist[vet[i-1]];
                dist[i] = 1 + dist[vet[i-1]];
            }
            else if(vet[i] == vet[i-1]){
                saida += dist[vet[i-1]];
                dist[i] = dist[vet[i-1]];
            }
        }
    }

    cout<<saida<<endl;

}
