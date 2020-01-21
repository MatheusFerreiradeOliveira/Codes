#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int vet[k], resp = n;
    for(int i = 0; i < k; i++)
    {
        cin>>vet[i];
        resp+=vet[i];
        if(resp>100)
            resp=100;
        else if(resp<0)
            resp=0;
    }
    cout<<resp<<endl;
}




