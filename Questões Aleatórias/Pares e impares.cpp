#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    map <string, int> mapa[3];
    while(getline(cin, s)){
        string nome;
        for(int i = 0; i < 3;i++){
            cin>>nome;
            mapa[nome][i]++;
        }

    }
    return 0;
}
