#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    while(n--) {
        int a, b;
        cin>>a>>b;
        map<string, string> mp;

        for(int i = 0; i < a; i++) {
            string davez;
            cin>>davez;
            string linha;
            getline(cin, linha);
            cout<<"davez = "<<davez<<" linha = "<<linha<<endl;
            mp[davez] = linha;
        }

        for(int i = 0; i < b; i++) {
            string mds;

            getline(cin, mds);

            string aux = "";

            for(int j = 0; j < mds.size();j++) {

                if(mds[j] == ' ' || mds[j] == '\n'){
                    (mp[aux] != "" ? mp[aux] : aux);
                    aux = "";
                }

                aux += mds[j];
            }
        }
    }
}
