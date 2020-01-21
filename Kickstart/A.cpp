#include <bits/stdc++.h>
using namespace std;

int main() {

    int q;
    int cont = 1;
    cin>>q;

    while(q--){
        int n, K;
        cin>>n>>K;
        int tam = 0;
        map<int, int> mp;

        for(int i = 1; i<=n; ++i) {
            int a;
            cin>>a;
            if(mp[a] == 0) tam++;
            mp[a]++;
        }
        int menor = 1e9+10;

        vector<int> vet;

        for(auto x : mp) {
            vet.push_back(x.second);
        }

        sort(vet.begin(), vet.end());

        int ans = 0;
        int aux = 0;

        while(K < tam) {
            ans += vet[aux];
            aux++;
            tam--;
        }

        cout<<"Case #"<<cont++<<": "<<ans<<"\n";
    }
}
