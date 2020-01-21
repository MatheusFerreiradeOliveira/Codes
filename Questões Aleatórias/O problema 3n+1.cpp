#include <bits/stdc++.h>
using namespace std;

int oloco(int x, int soma)
{
    if(x>1){
        soma++;
        if(x%2 == 0)
            return oloco(x/2, soma);
        else
            return oloco(((3*x)+1), soma);
    }
    return soma;
}
int main(){
    int x;
    int soma = 0;
    cin>>x;
    cout<<oloco(x, soma)<<endl;
}
