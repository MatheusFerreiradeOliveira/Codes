#include <bits/stdc++.h>
using namespace std;
int n, m;
int busca(int v[], int nu)
{
    int fim = n-1;
    int inicio = 0;
    int meio = n/2, result = -1;
    while(inicio <= fim){
        if(nu < v[meio]){
            fim = meio-1;
        }
        else if(nu > v[meio]){
            inicio = meio+1;
        }
        else{
            result = meio;
            fim = meio-1;
        }
        meio = (fim+inicio)/2;
    }
    return result;
}
int main(){

    cin>>n>>m;
    int cont = 1;
    while(n != 0 || m != 0){
        int v[n], lul[m];
        for(int i =0; i < n;i++){
            cin>>v[i];
        }
        sort(v, v+n);
        for(int i =0; i < m;i++){
            cin>>lul[i];
        }
        cout<<"CASE# "<<cont<<":"<<endl;
        cont++;
        for(int i =0; i < m;i++){

            int u = busca(v, lul[i]);
            if( u != -1){
                    cout<<lul[i]<<" found at "<<u+1<<endl;
            }
            else
                cout<<lul[i]<< " not found"<<endl;
        }
        cin>>n>>m;
    }

}
