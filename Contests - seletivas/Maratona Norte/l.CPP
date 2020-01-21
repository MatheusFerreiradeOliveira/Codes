#include <bits/stdc++.h>
#define MAX 110
using namespace std;

int main() {

    int n;

    cin>>n;

    string s;

    cin>>s;

    int m;

    cin>>m;

    string davez;

    char lul[MAX][MAX];
    int maior[MAX];

    memset(lul, 0, sizeof lul);
    memset(maior, 0, sizeof(maior));

    for(int i = 0; i < m; i++) {

        cin>>davez;

        for(int j = 0; j < n; j++) {
            lul[i][j] = davez[j];
        }
    }



    for(int i = 0; i < n; i++) {
        map<char, int> mp;
        for(int j = 0; j < m; j++) {

            if(lul[j][i] == s[i]) continue;

            mp[lul[j][i]]++;
            maior[i] = max(maior[i], mp[lul[j][i]]);

        }
    }


    int soma = 0;

    for(int i = 0; i < n; i++) {
        soma+=maior[i];
    }

    /*for(int i = 0; i < n; i++) {
        cout<<maior[i]<<" ";
    }*/

    cout<<soma<<endl;



}




