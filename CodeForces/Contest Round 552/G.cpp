#include <bits/stdc++.h>
using namespace std;

int MDC(int a, int b) {

    if (b==0) return a;

    return MDC(b,a%b);

}

int MMC(int a,int b){

    return a*b/MDC(a,b);

}

int main() {


    //cout<<MMC(2, 3);

    int n;

    cin>>n;

    int vet[n];

    for(int i = 0; i < n; i++) {
        cin>>vet[i];
    }

    sort(vet, vet+n);

    int saida = 999999999, ii, jj;

    for(int i = 0, j = n-1; i <= j; i++, j--) {

        //if(MDC(vet[i], vet[j]) == 1) i++;

        if(saida > MMC(vet[i], vet[i+1])) {

            ii = i;
            jj = i+1;

            saida = MMC(vet[i], vet[i+1]);

        }
    }

    cout<<saida<<endl;

    cout<<ii<<" "<<jj<<endl;

}

