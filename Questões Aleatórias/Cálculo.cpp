#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, maior;
    cin>>n>>m;
    if(n > m)
        maior = n;
    else
        maior = m;

    int n1[maior], n2[maior], saida[maior];

    memset(n1, 0, 4*maior);
    memset(n2, 0, 4*maior);
    memset(saida, 0, 4*maior);


    for(int i=0; i < n; i++)
        cin>>n1[i];

    for(int i=0; i < m; i++)
        cin>>n2[i];

    int resto = 0;
    for(int i = maior-1; i >= 0; i--)
    {
        if(n1[i]+n2[i]+resto == 0){
            saida[i] = 0;
            resto = 0;
        }
        else if(n1[i]+n2[i]+resto == 1){
            saida[i] = 1;
            resto = 0;
        }
        else if(n1[i]+n2[i]+resto == 2){
            saida[i] = 0;
            resto = 1;
        }
        else if(n1[i]+n2[i]+resto == 3){
            saida[i] = 1;
            resto = 1;
        }
    }
    int idultimo;
    for(int i = maior-1; i >= 0; i--)
    {
        if(saida[i] == 1)
        {
            idultimo = i;
            break;
        }
    }
    for(int i = 0; i <= idultimo; i++)
    {
        cout<<saida[i];
        if(i < idultimo) cout<<" ";
    }
    cout<<endl;
}
