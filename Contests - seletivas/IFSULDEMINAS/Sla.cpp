#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    if(n == 0 || n == 1 || n == 2 || n == 3) cout<<1<<endl;
    else if(n == 4) cout<<2<<endl;
    else if(n == 5 || n == 6) cout<<3<<endl;
    else {
        cout<<n-3<<endl;
    }

    return 0;
}

