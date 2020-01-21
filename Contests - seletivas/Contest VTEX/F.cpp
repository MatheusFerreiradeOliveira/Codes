#include <bits/stdc++.h>
using namespace std;

struct caixa {
    int a, b, c;
};

bool compara(caixa x, caixa y) {

    if(x.a != y.a)
        return x.a < y.a;
    if(x.b != y.b)
        return x.b < y.b;

    return x.c < y.c;

}


int main() {
    int n;

    cin>>n;

    caixa box[n];
    int vet[3];

    for(int i = 0; i < n; i++){
        cin>>vet[0]>>vet[1]>>vet[2];

        sort(vet, vet+3);

        box[i].a = vet[0];
        box[i].b = vet[1];
        box[i].c = vet[2];
    }

    bool deucerto = true;

    sort(box, box+n, compara);

    for(int i = 1; i < n; i++){

        if(box[i-1].a >= box[i].a || box[i-1].b >= box[i].b || box[i-1].c >= box[i].c)
            deucerto = false;

    }

    if(deucerto)
        cout<<"S"<<endl;

    else
        cout<<"N"<<endl;

}

