#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cin>>s;

    if(s == "0"){
        cout<<"S\nS\nS\n";
        return 0;
    }

    if(s.size() == 1){
        if((s[0]-48) % 4 == 0)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;

        if(s[0] == '9')
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;

        cout<<"N"<<endl;

        return 0;
    }

    if(((s[s.size()-2] - 48)*10 + (s[s.size()-1] - 48)) % 4 == 0)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

    long long int saida = 0;

    for(int i = 0; i < s.size();i++){
        saida+=s[i] - 48;
    }

    if(saida%9 == 0)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

    if(((s[s.size()-2] - 48)*10 + (s[s.size()-1] - 48)) % 25 == 0)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

    return 0;
}
