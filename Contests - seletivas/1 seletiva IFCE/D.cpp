#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;

    cin>>n>>m;

    int menor, maior;

    menor = min(n, m);

    maior = max(n, m);

    int saida = 0;

    if(maior >= 9 && menor < 9) saida = 4;

    else {
        if(maior >= 9 && menor >= 9) {
            if(maior >= 13 && menor < 13) saida = 3;

            else if(maior >= 13 && menor >= 13){
                if(maior >= 15 && menor < 15) saida = 2;
                else saida = 1;
            }

            else {
                if(maior >= 11 && menor < 11) saida = 2;
                else saida = 1;
            }
        }
        else {
            if(maior >= 5 && menor < 5) saida = 3;

            else if(maior >= 5 && menor >= 5){
                if(maior >= 7 && menor < 7) saida = 2;
                else saida = 1;
            }

            else {
                if(maior >= 3 && menor < 3) saida = 2;
                else saida = 1;
            }
        }
    }

    if(saida == 1){
        cout<<"oitavas"<<endl;
    }
    else if(saida == 2){
        cout<<"quartas"<<endl;
    }
    else if(saida == 3){
        cout<<"semifinal"<<endl;
    }
    else {
        cout<<"final"<<endl;
    }
}

