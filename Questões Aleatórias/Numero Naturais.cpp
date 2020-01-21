#include <bits/stdc++.h>
using namespace std;

int somar(int x, int soma)
{
    soma+=x;
    if(x >0)
        return somar(x-1, soma);
    return soma;
}
int main(){
    int x;
    int soma = 0;
    cin>>x;
    cout<<somar(x, soma)<<endl;
}
