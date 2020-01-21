#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin >> n;

    int vet[n];

    for(int i = 0; i < n - 1; i++) {
        cin>>vet[i];
    }

    int saida[n];

    map<int, int> mp;

    int u, w;

    if(vet[0] < 0) {
        for(int i = n, j = 1; i > j;) {
            if(j - i == vet[0]){
                //cout<<" j - i = "<<j-i<<endl;
                saida[0] = j - i;
                saida[1] = j;
                mp[saida[0]]++;
                mp[saida[1]]++;
                break;
            }
            else if(j - i > vet[0]) i--;

            else j++;
        }
    }
    else {
        for(int i = 1, j = n; i < j;) {
            if(j - i == vet[0]){
                //cout<<" j - i = "<<j-i<<endl;
                saida[0] = j - i;
                saida[1] = j;
                mp[saida[0]]++;
                mp[saida[1]]++;
                break;
            }
            else if(j - i > vet[0]) j--;

            else i++;
        }
    }

    for(int i = 2; i < n; i++) {
        saida[i] = saida[i-1] + vet[i-1];
        mp[saida[i]]++;
    }

    bool deucerto = true;

    for(int i = 1; i <= n; i++) {
        if(mp[i] != 1) {
            deucerto = false;
            break;
        }
    }

    if(deucerto){
        for(int i = 0; i < n; i++){
            cout<<saida[i]<<" ";
        }
        cout<<endl;
    }
    else {
        cout<<-1<<endl;
    }
}


