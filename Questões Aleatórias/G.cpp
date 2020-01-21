#include <bits/stdc++.h>
using namespace std;
string troca(string davez){
    if(davez == "Alice")
        return "Roberto";
    return "Alice";
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int tam;
        cin>>tam;
        int vet[tam];
        string davez = "Alice";
        for(int i = 0; i < tam; i++){
            cin>>vet[i];
        }
        for(int i = 0; i < tam; i++){
                if(i == 0){
                    if(vet[i] > vet[i+1]){
                        if(vet[i] == 1)
                            break;
                        vet[i] = 0;
                         davez = troca(davez);
                         i = 0;
                    }
                }
                else if(i == tam-1){
                    if(vet[i] > vet[i-1]){
                        if(vet[i] == 1)
                            break;
                        vet[i] = 0;
                        davez = troca(davez);
                        i = 0;
                    }
                }
                else if(vet[i] > vet[i-1] && vet[i] > vet[i+1]){
                        if(vet[i] == 1)
                            break;
                        vet[i] = 0;
                        davez = troca(davez);
                        i = 0;
                }
        }
        cout<<davez<<endl;
    }
    return 0;
}
