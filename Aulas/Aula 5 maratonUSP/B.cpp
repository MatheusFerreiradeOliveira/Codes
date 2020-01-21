#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(cin>>n && n != 0) {

        int vet[n];

        queue <int> posi;
        queue <int> nega;

        for(int i = 0; i < n; i++) {

            cin>>vet[i];

            if(vet[i] > 0) {
                posi.push(i);
            }

            else{
                nega.push(i);
                vet[i] *= -1;
            }
        }

        long long int saida = 0;

        while(!posi.empty() && !nega.empty()) {

            int id1, id2;
            int diferenca;

            id1 = posi.front();
            id2 = nega.front();

            //cout<<"Id 1 = "<<id1<<endl;
            //cout<<"Id 2 = "<<id2<<endl;

            if(vet[id1] > vet[id2]) {
                diferenca = vet[id2];

                vet[id1] -= vet[id2];
                vet[id2] = 0;

                nega.pop();
            }

            else if(vet[id1] < vet[id2]) {
                diferenca = vet[id1];

                vet[id2] -= vet[id1];
                vet[id1] = 0;

                posi.pop();
            }

            else {

                diferenca = vet[id2];

                vet[id1] = 0;
                vet[id2] = 0;

                nega.pop();
                posi.pop();
            }

            //cout<<"Diferenca = "<<diferenca<<endl;
            saida += (diferenca * (max(id1, id2) - min(id1, id2)));
            //cout<<"Saida = "<<saida<<endl;
        }

        cout<<saida<<endl;

    }
}
