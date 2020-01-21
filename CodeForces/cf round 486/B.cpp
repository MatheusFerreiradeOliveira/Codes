#include <bits/stdc++.h>
using namespace std;

bool compara(string a, string b) {
    return a.size() < b.size();
}

bool substring(string a, string b) {
    int i = 0;
    for(int j = 0; j < b.size(); j++) {
        if(a[i] == b[j]) {
            i++;
            if(i == a.size()) return true;
        }
        else i = 0;
    }
    if(i == a.size()) return true;
    return false;
}

int main() {

    int n;

    cin>>n;

    string vet[n];

    for(int i = 0; i < n; ++i) {
        cin>>vet[i];
    }

    sort(vet, vet+n, compara);

    for(int i = 0; i < n - 1; ++i) {
        if(!substring(vet[i], vet[i+1])){
            //cout<<"FALHOU COM "<<vet[i]<<" "<<vet[i+1]<<endl;
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES\n";
    for(auto x : vet) {
        cout<<x<<"\n";
    }
    return 0;
}

