#include <bits/stdc++.h>
#define MAX 200010
using namespace std;

int vet[MAX];
int n;

int main() {

    cin >> n;

    while ( n-- ) {
        int aux;

        cin>>aux;

        long long int divisors[aux];

        long long int maior = 0;

        long long int menor = 999999999;

        for(int i = 0; i < aux; i++) {

            cin>>divisors[i];

            maior = max(maior, divisors[i]);
            menor = min(menor, divisors[i]);
        }

        cout<<"Maior: "<<maior<<" menor: "<<menor<<endl;
        long long int x = maior*menor;

        bool deucerto = true;

        for(auto v : divisors) {
            if(x % v != 0) {
                deucerto = false;
                break;
            }
        }

        if(deucerto) cout<<x<<endl;

        else cout<<-1<<endl;
    }
}



