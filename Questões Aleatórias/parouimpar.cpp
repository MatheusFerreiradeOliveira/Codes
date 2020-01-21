#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, d;

    cin>>n>>m>>d;

    if(n == 0) {
        if((m+d)%2 == 0) cout<<0<<endl;

        else cout<<1<<endl;
    }
    else {
        if((m+d)%2 == 0) cout<<1<<endl;

        else cout<<0<<endl;
    }
}

