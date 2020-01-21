#include <bits/stdc++.h>
using namespace std;

bool checa(int numero) {

    int saida = 0;

    while(numero > 0) {
        saida += numero % 10;
        numero /= 10;
    }

    if(saida%4 == 0) return true;

    return false;

}

int main() {

    string s;

    cin>>s;

    int sum = 0;

    for(int i = 0; i < s.size(); i++) {
        sum += (s[i] - 48);
    }

    if(sum % 4 == 0) {
        cout<<s<<endl;
    }
    else {

        int numero = 0;
        for(int i = 0; i < s.size(); i++) {
                numero *= 10;
                numero += s[i]-48;
        }

        while(1) {
            numero++;

            bool deucerto = checa(numero);

            if(deucerto) {
                //cout<<"entrou"<<endl;
                cout<<numero<<endl;
                break;
            }
        }
    }
}
