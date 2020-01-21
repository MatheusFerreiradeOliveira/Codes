#include <bits/stdc++.h>
using namespace std;
long long int m;
bool compara(int a, int b){
    int lul, lol;
    lul = a%m;
    lol = b%m;
    if(lul == lol){
        if((a % 2 != 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 != 0) ){
            return a%2 != 0;
        }
        if(a%2 == 0)
            return a < b;
        return a > b;
    }
    return lul < lol;
}
int main(){
    long long int n;
    while(cin>>n>>m){
        if(n == 0 && m == 0)
        {
            cout<<n<<" "<<m<<endl;
            break;
        }
        int vet[n];
        for(int i = 0; i < n; i++){
            cin>>vet[i];
        }
        sort(vet, vet+n, compara);
        cout<<n<<" "<<m<<endl;
        for(int i = 0; i < n; i++){
            cout<<vet[i]<<endl;
        }
    }
    return 0;
}
