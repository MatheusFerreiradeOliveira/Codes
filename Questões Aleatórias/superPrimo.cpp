#include <bits/stdc++.h>
using namespace std;

bool ePrimo(int numero) {

    if(numero == 1 || numero == 0) return false;

    bool deucerto = true;

    for(int i = 2; i <= sqrt(numero); i++) {
        if(numero%i == 0) {
            deucerto = false;
            break;
        }
    }

    return deucerto;
}


int main() {
    string s;
    while(cin>>s) {

        int numero = 0;
        for(int cont = 0; cont < s.size(); cont++) {
            numero *= 10;
            numero += (s[cont] - 48);
        }

        if(ePrimo(numero)) {

            int agoraVai = true;

            for(int i = 0; i < s.size(); i++) {
                if(!ePrimo(s[i]-48)){
                    agoraVai = false;
                    break;
                }
            }

            if(agoraVai)
                cout<<"Super"<<endl;
            else
                cout<<"Primo"<<endl;
        }
        else {
            cout<<"Nada"<<endl;
        }
    }
}
