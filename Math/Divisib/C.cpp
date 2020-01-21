#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cin>>s;

    if(s.size() <= 1){
        cout<<"N"<<endl;
        return 0;
    }

    int soma1 = 0, soma2 = 0;

    soma1 += (s[0]-48) + (s[s.size()-1]-48);

    for(int i = 1; i < s.size()-1; i++) {
        soma2 += s[i]-48;
    }

    if(soma1 == soma2)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

    return 0;
}
