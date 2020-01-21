#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    int vet[n];

    for(int i = 0; i < n; i++) {
        cin>>vet[i];
    }
    int m;

    cin>>m;

    for(int i = 0, j = n-1; i < j;) {
        if(vet[i] + vet[j] == m){
            cout<<vet[i]<<" "<<vet[j]<<endl;
            break;
        }
        else if(vet[i] + vet[j] > m) {
            j--;
        }
        else {
            i++;
        }
    }

}


