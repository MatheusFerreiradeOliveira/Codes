#include <bits/stdc++.h>
using namespace std;


int main(){

    int n, k;
    cin>>n>>k;
    int vet[5010];
    int a[n];
    memset(vet, 0, sizeof(vet));
    bool deucerto = true;
    int runner;
    int maior = 0;
    for(int i = 0; i < n; i++){
        cin>>runner;
        vet[runner]++;
        a[i] = vet[runner];
        maior = max(vet[runner], maior);
        if(maior > k) deucerto = false;
    }

    if(deucerto == false) cout<<"NO"<<endl;

    else {
        for(int i = k, j = 0; i > maior; i--, j++){
            a[j] = i;
        }
        cout<<"YES"<<endl;
        for(int i = 0; i < n; i++){
            if(i < n-1) cout<<a[i]<<" ";
            else cout<<a[i]<<endl;
        }
    }

    return 0;
}

