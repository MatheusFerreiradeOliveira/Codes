#include<bits/stdc++.h>
using namespace std;

int main() {

    string d1, d2;

    cin>>d1>>d2;

    int ano1 = 0, ano2 = 0, dia1 = 0, dia2 = 0, mes1 = 0, mes2 = 0;

    for(int i = 6; i <= 9; ++i) {
        ano1 *= 10;
        ano2 *= 10;

        ano1 += d1[i] - 48;
        ano2 += d2[i] - 48;
    }

    for(int i = 0; i <= 1; ++i) {
        dia1 *= 10;
        dia2 *= 10;

        dia1 += d1[i] - 48;
        dia2 += d2[i] - 48;
    }

    for(int i = 3; i <= 4; ++i) {
        mes1 *= 10;
        mes2 *= 10;

        mes1 += d1[i] - 48;
        mes2 += d2[i] - 48;
    }

    //cout<<ano2<<mes2<<dia2<<" "<<ano1<<mes1<<dia1<<endl;

    if(ano2 > ano1) cout<<"Futuro\n";

    else if(ano1 > ano2) cout<<"Passado\n";

    else {
        if(mes2 > mes1) cout<<"Futuro\n";

        else if(mes1 > mes2) cout<<"Passado\n";

        else {
            if(dia2 > dia1) cout<<"Futuro\n";

            else if(dia1 > dia2) cout<<"Passado\n";

            else cout<<"Presente\n";
        }
    }



}
