#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int vet[n];
    int resps[n];
    for(int i=0; i < n; i++)
    {
        cin>>vet[i];
    }
    for(int i=0; i < n; i++)
    {
        if(n > 1)
            resps[0] = vet[0] + vet[1];
        if(i<n-1 and i > 0)
        {
            resps[i] = vet[i-1]+vet[i]+vet[i+1];
        }
        if(i == n-1)
            resps[n-1] = vet[n-1]+vet[n-2];
        cout<<resps[i]<<endl;
    }

}



