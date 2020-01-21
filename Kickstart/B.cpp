#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin>>q;
    int caso = 1;
    while(q--) {

        int n, s;

        cin>>n>>s;

        set<int> vet[n];

        int cont = 0;

        while(cont < n) {
            int k;

            cin>>k;

            for(int i = 0; i < k; ++i) {
                int a;
                cin>>a;
                vet[cont].insert(a);
            }

            cont++;
        }

        int ans = 0;

        cout<<"Case #"<<caso<<": ";

        bool visit[n];

        for(int i = 0; i < n; ++i) {
            memset(visit, false, sizeof visit);
            for(int x : vet[i]) {
                for(int j = 0; j  < n; ++j) {
                    if(!visit[j] && vet[j].count(x) == 0) {
                        ans++;
                        visit[j] = 1;
                        //cout<<i<<" "<<j<<endl;
                    }
                }
            }
        }
        cout<<ans;
        caso++;
        cout<<"\n";

    }
}
