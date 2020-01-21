#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int vet[n];
    for(int i=0; i < n; i++)
    {
        cin>>vet[i];
    }
    int resp = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(vet[i]+10 <= vet[i+1])
            resp+=10;
        else
            resp+=vet[i+1]-vet[i];
    }
    resp+=10;
    cout<<resp<<endl;
}
