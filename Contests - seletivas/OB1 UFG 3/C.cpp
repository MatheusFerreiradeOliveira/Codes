#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    set<int> vet;

    for(int i = 0; i < n; i++) {
        int a;
        cin>>a;
        vet.insert(a);
    }
    int m;

    cin>>m;

    for(int i = 0; i < m; i++) {
        int lul;
        cin>>lul;

        if(vet.count(lul) > 0) cout<<"SIM"<<endl;
        else cout<<"NAO"<<endl;
    }



}

