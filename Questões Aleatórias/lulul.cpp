#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[n][n], b[n][n], c[n][n];
    int P, Q , R ,S, X, Y;
    cin>>P>>Q>>R>>S>>X>>Y;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            a[i][j] = (P * i + Q * j)%X;
            b[i][j] = (R * i + S * j)%Y;
        }
    }
    int put, aria;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            c[put][aria] += a[i][j] * b[j][i];
        }
    }
    cout<<c[put][aria]<<endl;
    return 0;
}
