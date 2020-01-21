#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, maior = 0, idmaior;
    cin>>n;
    int i = 0;
    while(i < n){
        int d, c;
        cin>>d>>c;

        if(d*c > maior){
            maior = d*c;
            idmaior = i;
        }
        i++;
    }
    cout<<idmaior<<endl;
    return 0;
}








