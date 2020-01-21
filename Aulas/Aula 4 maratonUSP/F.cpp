#include <bits/stdc++.h>
using namespace std;

int fatorial(int n){
    if(n == 1 || n == 0)
        return 1;
    return n * fatorial(n-1);
}

int main(){
    int n;
    cin>>n;
    int vet[n];

    for(int i = 0; i < n; i++){
        cin>>vet[i];
    }

    if(n == 1) cout<<"1 0"<<endl;

    else {
        int a = 0, b= 0;
        a = vet[0];
        b = vet[n-1];
        int i, j;
        for(i = 1, j = n-2; i <= j;){
            if(a <= b){
                a += vet[i];
                i++;
                //cout<<"Atribuiu A primeiro\n"<<a<<endl;
            }
            else{
                b += vet[j];
                j--;
                //cout<<"Atribuiu B primeiro\n"<<b<<endl;
            }
        }
        cout<<i<<" "<<n-j-1<<endl;
    }

}



