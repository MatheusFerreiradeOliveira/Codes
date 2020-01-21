#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin >> n;

    int vet[n];

    int first = -1;

    for(int i = 0; i < n; i++) {
        cin>>vet[i];

        if(first == -1 && vet[i] == 1)
            first = i;
    }

    if(first == -1)
        cout<<0<<endl;
    else {
        int tot = 0, saida = 0;
        bool continua = true;
        for(int i = first; i < n; i++) {

            if(vet[i] == 1){
                saida++;
                tot = max(tot, saida);
            }
            else {
                saida = 0;

                if(!continua)
                    break;
            }

            if( i == n-1){
                i = -1;
                continua = false;
            }
        }
        cout<<tot<<endl;
    }





}

