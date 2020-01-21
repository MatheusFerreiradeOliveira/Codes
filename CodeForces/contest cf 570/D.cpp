#include <bits/stdc++.h>
using namespace std;
int main() {

    int q;

    cin>>q;

    while(q--) {
        int n;

        cin>>n;

        map<int, int> mp;
        //map<int, int> removeDo;

        for(int i = 0; i < n; i++) {
            int a;
            cin>>a;
            mp[a]++;
        }

        set<int> saida;
        int saidaG = 0;

        for(int i = 1; i <= n; i++) {
            if(mp[i] > 0) {
                if(saida.count(mp[i]) == 0) {
                    saida.insert(mp[i]);
                    saidaG += mp[i];
                    //cout<<"SaidaG = "<<saidaG<<endl;
                }
                else {
                    mp[i]--;

                    if(mp[i] <= 0) continue;

                    while(saida.count(mp[i]) > 0) {
                        mp[i]--;
                    }

                    if(mp[i] > 0) {
                        saida.insert(mp[i]);
                        saidaG += mp[i];
                        //cout<<"SaidaG = "<<saidaG<<endl;
                    }

                }
            }
        }

        cout<<saidaG<<endl;

    }
}



