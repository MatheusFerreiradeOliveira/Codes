#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;

    cin>>n>>k;

    int vet[n];

    map<int, int> mp;

    for(int i = 0; i < n; ++i) {
        cin>>vet[i];
        mp[vet[i]]++;
    }

    vector<int> ans;

    for(int i = 0; i < n; ++i) {
        if(mp[vet[i]] > 0) {
            k--;
            ans.push_back(i+1);
            mp[vet[i]] = 0;
            if(k == 0) break;
        }
    }

    if(k == 0) {
        cout<<"YES\n";
        int cont = 1;
        for(auto x : ans) {
            cout<<x;
            if(cont == ans.size()) cout<<endl;
            else cout<<" ";
            cont++;
        }
    }
    else {
        cout<<"NO"<<endl;
    }
}
