#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    string s;

    cin>>s;

    int vet[10];

    for(int i = 0; i < 9; i++) {
        cin>>vet[i];
    }

    int cont = 0;

    for(int i = 0; i < s.size(); i++) {
        if((s[i]-48) <= vet[s[i]-49]) {
            s[i] = vet[s[i]-49]+48;
        }
        else {
            if(cont != 0) break;
        }
    }

    cout<<s<<endl;
}
