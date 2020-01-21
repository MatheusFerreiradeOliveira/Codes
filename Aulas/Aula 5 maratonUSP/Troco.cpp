#include <bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin>>n;

    int saida = 0;

    while(n > 1) {

        saida += n/100;

        n %= 100;

        saida += n/50;

        n %= 50;

        saida += n/25;

        n %= 25;

        saida += n/10;

        n %= 10;

        saida += n/5;

        n %= 5;

        if(n < 5 && n > 0) {
            saida += n;
            n = 0;
        }
    }

    cout<<saida<<endl;


}
