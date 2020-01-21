#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;

    int t, n, m;

    cin>>t>>n>>m;

    cin>>s;

    int saida = 0;

    for(int i = t-1; i >= 0; i--, m--, n--) {

        if(m > 0 && s[i] == '1') {
            s[i] = '0';
            saida++;
        }

        else if(m == 0){
            if(s[i] == '0'){
                s[i] = '1';
                saida++;
            }
        }

        else if( m < 0 && n > 0 && s[i] == '1'){
            s[i] = '0';
            saida++;
        }

    }

    cout<<saida<<endl;


}
