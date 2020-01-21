#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cin>>s;

    //cout<<s[s.size()-1] - 48<<endl;

    if((s[s.size()-1] - 48) % 2 == 0)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

    int saida = 0;

    for(int i = 0; i < s.size();i++){
        saida+=s[i] - 48;
    }

    if(saida%3 == 0)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

    if((s[s.size()-1] - 48) % 5 == 0)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

    return 0;
}
