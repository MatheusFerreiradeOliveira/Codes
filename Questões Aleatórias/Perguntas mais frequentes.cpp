#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    while(n!=0 and k!=0){
        int vet[n];
        int resps[1000] = {0};
        int maior =0;
        for(int i=0; i < n;i++)
        {
            cin>>vet[i];
            if(vet[i] > maior)
                maior = vet[i];
            resps[vet[i]]++;
        }
        int cont =0;
        for(int i =0; i <= maior; i++)
        {
            if(resps[i] >= k)
                cont++;
        }
        cout<<cont<<endl;
        cin>>n>>k;
    }

}

