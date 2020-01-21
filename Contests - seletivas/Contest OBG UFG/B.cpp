#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;

    cin>>n>>m;

    int maiorChar, menorChar;
    int maior, menor;

    if(m > n) {
        maior = m;
        menor = n;
        maiorChar = 0;
        menorChar = 1;
    }
    else {
        maior = n;
        menor = m;
        maiorChar = 1;
        menorChar = 0;
    }

    int auxMaior = maior;
    int auxMenor = menor;

    if(menor == 0)
    for(int i = 0; i < maior; i++){
        cout<<maiorChar<<" ";
    }


    if(maior == menor) {
        for(int i = 0; i < m+n; i++) {

            if(i%2 == 0) cout<<maiorChar<<" ";

            else cout<<menorChar<<" ";
        }

        cout<<endl;

    }

    else {

        if(menor == 1) menor++;



        int razao = maior / menor;



        for(int i = 0; auxMaior > 0 || auxMenor > 0; i++) {

            if(i == razao) {
                cout<<menorChar<<" ";
                auxMenor--;
                i = -1;
                continue;
            }
            else {
                cout<<maiorChar<<" ";
                auxMaior--;
            }
        }
        cout<<endl;
    }


}

