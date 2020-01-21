#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    long long vet[n];
    long long vetAux[n];


    for(int i = 0; i < n; i++) {
        cin>>vet[i];
        vetAux[i] = vet[i];
    }

    sort(vetAux, vetAux+n);

    int c1, c2;

    multiset<long long> st;

    for(int i = 0; i < n; i++) {
        if(vet[i] != vetAux[i])
            st.insert(vet[i]);
    }

    cout<<st.size()<<endl;

    for(long long x : st) {
        cout<<x<<" ";
    }

    cout<<endl;
}
