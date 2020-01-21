#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    map <string, string> pai;

    cin>>n;

    string a, b;

    bool continua = true;

    set<string> susp;

    for(int i = 0; i < n; i++) {

        cin>>a>>b;

        if(a == b) {
            susp.clear();
            susp.insert(a);
            continua = false;
        }

        if(continua) {
            if(pai[b] != "") {
            susp.insert(pai[b]);
            susp.insert(a);
            }
            else {
                pai[b] = a;
            }
        }
    }

    cout<<susp.size()<<endl;

    for(string x : susp){
        cout<<x<<endl;
    }
}

