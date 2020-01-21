#include <bits/stdc++.h>
using namespace std;

struct Time{
    int Nvit = 0, sg = 0, pont = 0;
    string nome;
};

bool compara(Time A, Time B) {

    if(A.pont != B.pont)
        return A.pont > B.pont;

    if(A.Nvit != B.Nvit)
        return A.Nvit > B.Nvit;

    if(A.sg != B.sg)
        return A.sg > B.sg;

    return A.nome < B.nome;
}

int main() {

    int cont[10];

    memset(cont, 0, sizeof cont);

    for(int i = 0; i < 7;i++){
        for(int j = 0; j < 7; j++) {
            int a;
            cin>>a;
            if(a == 1) cont[i]++;
        }
    }

    for(int i = 0; i < 7; i++) {
        cout<<cont[i]<<endl;
    }



}

