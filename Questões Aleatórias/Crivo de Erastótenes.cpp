#include <bits/stdc++.h>
using namespace std;
#define MAX 100100
#define Raiz 1010
bool p[MAX];
void crivo(){
    memset(p, false, sizeof p);
    for(int i = 4; i < MAX; i+=2) p[i] = true;
    for(int j = 3; j < Raiz; j+=2){
        if(!p[j]){
            for(int u = j*j; j < MAX; j=j*2){
                p[j] = true;
            }
        }
    }
}
int main(){
    int n, c;
    cin>>n>>c;
    int primos[1000];
    crivo();
    memset(primos, 0, sizeof primos);
    int Nprimos = 0;
    for(int i = 1; i <= n; i++){
        if(p[i] == false){
            Nprimos++;
            primos[i-1] = i;
        }
    }
    cout<<"Numero de primos: "<<Nprimos<<endl;
    cout<<n<<" "<<c<<": ";
    int tam = Nprimos;
    if(Nprimos%2 == 0){
        for(int i = (tam/2)-c; i < (tam/2)+c-1;i++){
                cout<<primos[i];
                if(i < ((tam/2)+c-1)-1)
                    cout<<" ";
        }
    }
    else{
        for(int i = (tam/2)-c+1; i < (tam/2)+c-1;i++){
                cout<<primos[i];
                if(i < ((tam/2)+c-1)-1)
                    cout<<" ";
        }
    }
    cout<<endl;
}
