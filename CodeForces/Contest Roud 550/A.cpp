#include <bits/stdc++.h>
#define MAX 300
using namespace std;

int main() {

    int n;

    cin>>n;

    string s;

    for(int i = 0; i < n; i++) {
        map<char, int> mp;
        bool dupla = false;
        bool seq = true;

        cin>>s;

        set<int> mds;
        int maior = 0;

        for(int u = 0; u < s.size(); u++) {
            mp[s[u]]++;
            mds.insert(s[u]);
            if(mp[s[u]] > 1){
                dupla = true;
                break;
            }

            maior = max(maior, (int)s[u]);
        }

        for(auto x : mds) {

            if(x == maior)
                continue;

            if(mds.count(x+1) == 0)
                seq = false;

        }

        if(!dupla && seq)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
