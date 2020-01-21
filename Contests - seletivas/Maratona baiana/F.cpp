#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;

    cin>>n>>m;

    int mat1[n][m];
    int mat2[n][m];

    for(int i = 0; i < n; i++) {
        string s;
        cin>>s;
        for(int j = 0; j < m; j++) {
            mat1[i][j] = s[j];
        }
    }

    for(int i = 0; i < n; i++) {
        string s;
        cin>>s;
        for(int j = 0; j < m; j++) {
            mat2[i][j] = s[j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(mat2[i][j] != mat1[i][j])
                cout<<i+1<<" "<<j+1<<endl;
        }
    }





}


