#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    map <string, int> lul;

    cin>>n>>m;

    string a;
    int b;

    for(int i = 0; i < n; i++){
        cin>>a>>b;
        lul[a] = b;
    }

    int saida;

    for(int i = 0; i < m; i++){
        saida = 0;
        while(cin>>a && a != ".") {
            saida+=lul[a];
        }
        cout<<saida<<endl;
    }
}
