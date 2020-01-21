#include <bits/stdc++.h>
using namespace std;
int razao(int a, int b){
    //a < 0 ? a=-a : a=a;
    //b < 0 ? b=-b : b=b;
    //if (a-b > 0) return a-b;
    return a - b;
}
int main(){
    int n, r, resp = 1;
    cin>>n;
    int vet[n];
    for(int i = 0; i < n;i++){
        cin>>vet[i];
    }
    if(n > 1){
        int aux;
        r = razao(vet[0], vet[1]);
        for(int i = 1; i < n-1;i++){
            //cout<<"Razao da vez: "<<r<<endl;
            aux = razao(vet[i], vet[i+1]);
            if(aux != r){
                resp++;
                if(i < n-2){
                    r = razao(vet[i+1], vet[i+2]);
                }
                else
                    break;
            }
        }
        cout<<resp<<endl;
    }
    else
        cout<<1<<endl;

}
