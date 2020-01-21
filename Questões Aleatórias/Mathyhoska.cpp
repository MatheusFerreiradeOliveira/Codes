#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    int vet1[n], vet2[n], erradas[n];
    for(int i = 0; i < n; i++){
        cin>>vet1[i];
        vet2[i] = vet1[i];
    }
    sort(vet1, vet1+n);
    int cont = 0;
    int j = 0;
    for(int i = 0; i < n; i++){
        if(vet1[i] != vet2[i]){
            cont++;
            erradas[j] = vet2[i];
            j++;
        }
    }
    sort(erradas, erradas+j);
    cout<<cont<<endl;
    for(int i =0; i < j; i++)
    {
        cout<<erradas[i];
        if(i<j-1)
            cout<<" ";
    }
    cout<<endl;
    return 0;
    }
