#include <bits/stdc++.h>
using namespace std;

bool compara(char a, char b){

    return a > b;

}

int main() {

    int n;

    cin>>n;

    vector<char> cons;
    vector<char> vog;

    map<string, int> mp;
    vector<string> saida;

    for(int i = 0; i < n; i++) {
        string s;
        cin>>s;

        mp[s]++;

        if(mp[s] == 2) saida.push_back(s);
    }

    if(saida.empty())
        cout<<-1<<endl;

    else{
        sort(saida.begin(), saida.end());
        for(string x : saida) {
            cout<<x<<endl;
        }
    }
}





