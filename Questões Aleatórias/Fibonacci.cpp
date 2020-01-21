#include <bits/stdc++.h>
using namespace std;

int oloco(int x, int soma, int i)
{
    int aux;
    if(x > 1){
        aux = soma;
        soma += i;
        i = aux;
        return oloco(x-1, soma, i);
    }
    return soma;
}
int main(){
    int x;
    int soma = 1, i = 1;
    cin>>x;
    cout<<oloco(x, soma, i)<<endl;
}
