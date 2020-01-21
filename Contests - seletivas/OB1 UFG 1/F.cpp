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

    string s;

    cin>>s;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            vog.push_back(s[i]);
        else
            cons.push_back(s[i]);
    }

    sort(cons.begin(), cons.end());
    for(char x : cons){
        cout<<x;
    }
    sort(vog.begin(), vog.end(), compara);
    for(char x : vog) {
        cout<<x;
    }
    cout<<endl;
}





