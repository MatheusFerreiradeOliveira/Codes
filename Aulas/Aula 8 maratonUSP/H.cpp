#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    while(cin>>n && n!= 0) {

        long long int saida = 0;

        for(int i = 1; i <= n; i++) {
            saida+= i*i;
        }

        cout<<saida<<endl;

    }

}
