#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i = 0; i < n; ++i) {
        long long a;
        cin>>a;
        if(a%2 == 1) cout<<0<<"\n";
        else cout<<a/2<<"\n";
    }
}

