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

    double val1 = 0, val2 = 0, val3 = 0;
    for(int i = 0; i < maior; i++)
    {

        val1+=n1[i] * pow(2, -(i+1));
        val2+=n2[i] * pow(2, -(i+1));
    }

    val3 = val1+val2;

    for(int i = 0; i < maior; i++)
    {
        if(val3 - pow(2, -(i+1)) >= 0){
            saida[i] = 1;
            val3 -= pow(2, -(i+1));
        }
        else{
            saida[i] = 0;
        }
    }
    for(int i = 0; i < maior; i++)
    {
        cout<<saida[i];
        if( i < maior-1 )
            cout<<" ";
    }
    cout<<endl;
}

