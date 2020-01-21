#include <bits/stdc++.h>
using namespace std;

int main() {

    int q;

    cin>>q;

    while(q--) {
        int n, m;
        cin>>n>>m;

        int vet[n];

        for(int i = 0; i < n; i++) {
            cin>>vet[i];
        }

        sort(vet, vet+n);

        int dif = vet[n-1] - vet[0];

        if(dif%2 == 1) dif++;

        if(dif/2 > m) cout<<-1<<endl;

        else {
            cout<<vet[0]+m<<endl;
        }
    }
}

