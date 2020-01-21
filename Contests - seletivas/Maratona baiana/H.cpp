#include <bits/stdc++.h>
using namespace std;

int main () {

    unsigned long long n;

    cin>>n;

    int saida = 1;

    unsigned long long cont = 2;

    while(cont <= n) {
        cont = cont<<1;
        //cout<<cont<<endl;
        saida++;
    }

    if(n == 0) saida = 0;

    cout<<saida<<endl;

}





