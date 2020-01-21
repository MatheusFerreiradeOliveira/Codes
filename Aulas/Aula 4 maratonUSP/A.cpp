#include <bits/stdc++.h>
using namespace std;
int cont = 0;

int recursao(int n){
    if(n == 1)
        return cont;

    cont++;

    (n%2==0) ? n/=2 : n = (n*3) + 1;

    recursao(n);

}

int main(){
    int n;
    cin>>n;
    cout<<recursao(n)<<endl;
}
