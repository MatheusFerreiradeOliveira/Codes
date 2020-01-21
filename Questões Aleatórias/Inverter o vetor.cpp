#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *vet = (int*)malloc(sizeof(int)*n);
    for(int i =0; i < n; i++)
        {
            cin>>vet[i];
        }
    int *aux = (int*)malloc(sizeof(int)*n);
    int p = n;
    for(int i=0; i < n; i++)
    {
        aux[i] = vet[p-1];
        p--;
    }
    for(int i=0; i <n; i++)
    {
        cout<<aux[i] ;
    }
    cout<<endl;
}
