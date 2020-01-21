#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    long long int maior = 0, menor = 0, maiorS = 0, menorS = 0;

    map<char, int> lul;

    lul['A'] = -50;
    lul['C'] = -13500;
    lul['S'] = 200;
    lul['P'] = 13000;
    lul['M'] = 550;
    lul['K'] = -20;
    lul['B'] = 40;
    lul['N'] = 0;


    int cont = 0;

    bool first = true;

    for(int i = 0; i < n; ++i) {
        char a;
        cin>>a;

        if(first && a != 'N') {
            first = false;
            maior = lul[a];
            menor = lul[a];
            maiorS = lul[a];
            menorS = lul[a];
        }

        else if(first == false){
            if(lul[a] > 0) {
                if(maior < 0) {
                    maior = lul[a];
                    maiorS = max(maior, maiorS);
                }
                else {
                    maior += lul[a];
                    maiorS = max(maiorS, maior);
                }
                if(menor > 0) continue;

                else if(menor + lul[a] < 0) {
                    menorS = min(menorS, menor);
                    menor += lul[a];
                    //menorS = min(menorS, menor);
                }
                else {
                    menorS = min(menorS, menor);
                    menor = 0;
                }
            }
            else if(lul[a] < 0) {
                if(menor > 0) {
                   menor = lul[a];
                   menorS = min(menor, menorS);
                }
                else {
                    menor += lul[a];
                    menorS = min(menorS, menor);
                }
                if(maior < 0) continue;

                else if(maior + lul[a] > 0) {
                    maiorS = max(maiorS, maior);
                    maior += lul[a];
                    //maiorS = max(maiorS, maior);
                }
                else {
                    maiorS = max(maiorS, maior);
                    maior = 0;
                }
            }
        }
    }
    cout<<maiorS<<" "<<menorS<<endl;
}
