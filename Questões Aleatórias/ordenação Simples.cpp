#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    int vet1[n];
    for(int i = 0; i < n; i++){
        cin>>vet1[i];
    }
    sort(vet1, vet1+n);
    for(int i = 0; i < n; i++){
        cout<<vet1[i];
        if(i<n-1)
            cout<<" ";
    }
    cout<<endl;
    return 0;

}

