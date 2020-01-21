#include <bits/stdc++.h>
#define MAX 110
using namespace std;


int main() {

    int n;

    cin>>n;

    while(n--) {

        int q;

        cin>>q;

        int vet[q];

        int saida = 0;

        int cont0 = 0, cont1 = 0, cont2 = 0;

        for(int i = 0; i < q; i++) {
            cin>>vet[i];
            if(vet[i]%3 == 0)
                cont0++;
            else if(vet[i]%3 == 1)
                cont1++;
            else if(vet[i]%3 == 2)
                cont2++;
        }


        cout<<cont0 + (cont1 +cont2)/2<<endl;

    }

}


