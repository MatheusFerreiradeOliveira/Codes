#include <bits/stdc++.h>
using namespace std;

bool compara(char a, char b){

    return a > b;

}

int main() {

    int n, cont = 0;

    cin>>n;

    for(int i = 0; i < n; i++){
        int a;
        cin>>a;

        if(a == 1) cont++;
    }

    cout<<n-cont<<endl;
}




