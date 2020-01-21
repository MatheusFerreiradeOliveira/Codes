#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;

    cin>>n>>m;

    int vet[n+1];

    for(int i = 1; i <= n; i++) {
        cin>>vet[i];
    }

    int marc[n+1];

    memset(marc, 0, sizeof marc);

    int saida = 0;

    for(int i = 1; i <= n; i++) {
        bool precisa = false;
        if(vet[i] == 0) continue;
        for(int j = abs(i - m) + 1; j <= i + m - 1; j++) {

            if(j <= 0 || j > n) continue;

            if(marc[j] == 0) {
                marc[j] = 1;
                precisa = true;
            }
        }
        if(precisa) {
            saida++;
            cout<<"contou com i = "<<i<<endl;
        }
    }

    bool deucerto = true;

    for(int i = 1; i <= n; i++) {
        if(marc[i] == 0) {deucerto = false; break;}
    }

    if(deucerto) cout<<saida<<endl;

    else cout<<-1<<endl;

}

