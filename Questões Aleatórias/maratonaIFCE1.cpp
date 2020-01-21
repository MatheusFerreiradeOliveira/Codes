#include <bits/stdc++.h>
using namespace std;
struct Pecas{
    int posiX, posiY;
};
int main(){
    int n;
    int contador = 1;
    while(cin>>n){
        cout<<"Entrou com "<<n<<endl;
        Pecas pecas[n];
        for(int i=0; i < n;i++){
            cin>>pecas[i].posiX>>pecas[i].posiY;
        }
        int eX, eY;
        eX = pecas[0].posiX;
        eY = pecas[0].posiY;
        pecas[0].posiX = -1;
        pecas[0].posiY = -1;
        int deucerto = true;
        for(int k=0; k < n;k++){
            for(int i = 1; i < n; i++){
                if(pecas[i].posiX == eX || pecas[i].posiX == eY){
                    eX = pecas[i].posiY;
                    pecas[i].posiX = -1;
                }
                else if(pecas[i].posiY == eX || pecas[i].posiY == eY){
                    eY = pecas[i].posiX;
                    pecas[i].posiY = -1;
                }
            }
            bool deucerto = true;
            for(int p = 0; p < n; p++){
                if(pecas[p].posiX != -1 || pecas[p].posiY != -1)
                    deucerto = false;
            }
            if(deucerto){
                cout<<"Teste "<<contador<<endl;
                cout<<"Sim"<<endl<<endl;
                break;
            }
        }
        if(!deucerto){
            deucerto = true;
            for(int p = 0; p < n; p++){
                    if(pecas[p].posiX != -1 || pecas[p].posiY != -1)
                        deucerto = false;
            }
            cout<<"Teste "<<contador<<endl;
            if(deucerto)
                cout<<"Sim"<<endl<<endl;
            else
                cout<<"Não"<<endl<<endl;
        }
        contador++;
    }
    return 0;
}

