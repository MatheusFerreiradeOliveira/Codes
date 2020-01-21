#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int saida = 0;
    if(n > 100) {
        saida += ((n - 100)*5);
        n -= (n - 100);
    }
    if(n > 30) {
        saida += ((n - 30) * 2);
        n -= (n - 30);
    }
    if(n > 10) {
        saida += (n - 10);
        n -= (n - 10);
    }
    if(n >= 0)
        saida += 7;
    cout<<saida<<endl;
}
