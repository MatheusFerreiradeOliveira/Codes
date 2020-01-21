#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    char m[a][b];
    for(int i = 0; i < a;i++){
        for(int j = 0; j < b; j++){
            cin>>m[i][j];
        }
    }
    int cont = 0;
    for(int i = 0; i < a;i++){
        for(int j = 0; j < b; j++){
            if(m[i][j] == '#'){
                if((j > 0 && j < b-1) && (i > 0 && i < a-1)){
                    if(m[i-1][j] == '.' || m[i+1][j] == '.' || m[i][j+1] == '.' || m[i][j-1] == '.')
                        cont++;
                }
                else
                    cont++;
            }
        }
    }
    cout<<cont<<endl;


}
